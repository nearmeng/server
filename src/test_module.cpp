#include "stdafx.h"
#include "test_module.h"

#include "router_client_api.h"
#include "tconnapi/tframehead.h"

#include "common_message.h"
#include "conn_message.h"
#include "proto/proto_head.pb.h"
#include "cs_proto/proto_msgid.pb.h"
#include "cs_proto/external_message.pb.h"

#include "app/server_app.h"
#include "app/server_msg_handler.h"
#include "string/string_ex.h"
#include "define/server_def.h"
#include "define/conn_def.h"

#include "res_def/achieve_res.h"

#include "db_proxy_client.h"
#include "config/server_config.h"

#include "test_coro.h"
#include "session/session_module.h"
#include "event/server_event.h"

BOOL do_send_control_ack(SSMSG_CONTEXT* pCtx, int32_t nResult, const char* pDesc)
{
	int32_t nRetCode = 0;
	A2A_CONTROL_ACK msg;

	msg.nResult = nResult;
	strxcpy(msg.szDesc, pDesc, sizeof(msg.szDesc));
	msg.nDescLen = strlen(pDesc);

    nRetCode = pCtx->send_ack(a2a_control_ack, &msg, sizeof(msg));
    LOG_PROCESS_ERROR(nRetCode);

	return TRUE;
Exit0:
	return FALSE;
}

struct TEST_USER_DATA
{
    int32_t nTestValue;
    char    szString[20];
};

void _test_redis_callback(redisReply* pReply, const char* pUserData, size_t dwDataSize)
{
    INF("got reply");
}

void on_control(SSMSG_CONTEXT* pCtx, const char* pBuffer, size_t dwSize)
{
	int32_t nRetCode = 0;
	A2A_CONTROL_REQ* msg = (A2A_CONTROL_REQ*)pBuffer;
    int32_t nCount = 0;
    const ACHIEVE_RES* pRes = CResMgr<ACHIEVE_RES>::instance().get_first_res();

	INF("test on control command type %s command content %s param %lld", msg->szCommandType, msg->szCommandContent, msg->qwParam);

	if (strcmp(msg->szCommandType, "reload") == 0)
	{
        CMGApp::instance().reload();

        /*
        TEST_USER_DATA stTestData;
        stTestData.nTestValue = 12345;
        strxcpy(stTestData.szString, "hello world", sizeof(stTestData.szString));

        CDBProxyClient::instance().reg_redis_callback(recTest, _test_redis_callback);

        //nRetCode = CDBProxyClient::instance().redis_command(1, (const char*)&stTestData, sizeof(stTestData), msg->szCommandContent);
        //LOG_PROCESS_ERROR(nRetCode);
        nRetCode = CDBProxyClient::instance().redis_eval(recTest, (const char*)&stTestData, sizeof(stTestData), g_RedisScriptConfig.scripts[recTest].szScript, "1 %s %d", "hello", 20);
        LOG_PROCESS_ERROR(nRetCode);
        */

        CTestCoro* pCoro = CCoroStacklessMgr<CTestCoro>::instance().new_coro();
        LOG_PROCESS_ERROR(pCoro);

        pCoro->set_start_arg(123456);
        nRetCode = CCoroStacklessMgr<CTestCoro>::instance().start_coro(pCoro);
        LOG_PROCESS_ERROR(nRetCode);
	}
    
    while (pRes)
    {
        nCount++;
        INF("all read count %d", nCount);
        INF("res_data: id %d name %s cond_type %d achieve_type %d cond_param %d reward_id %d score %d", pRes->nID, pRes->szName, pRes->nCondType, pRes->nAchieveType, pRes->nCondParam[0], pRes->nRewardID, pRes->nScore);
        pRes = CResMgr<ACHIEVE_RES>::instance().get_next_res();
    }

	nRetCode = do_send_control_ack(pCtx, 0, "success");
	LOG_PROCESS_ERROR(nRetCode);

Exit0:
	return;
}

BOOL CTestModule::init(BOOL bResume)
{
    int32_t nRetCode = 0;

	INF("test module is init");
	
    register_server_msg_handler(a2a_control_req, on_control);
	
    int32_t nCount = 0;
    const ACHIEVE_RES* pRes = CResMgr<ACHIEVE_RES>::instance().get_first_res();
    while (pRes)
    {
        nCount++;
        INF("all read count %d", nCount);
        INF("res_data: id %d name %s cond_type %d achieve_type %d cond_param %d reward_id %d score %d", pRes->nID, pRes->szName, pRes->nCondType, pRes->nAchieveType, pRes->nCondParam[0], pRes->nRewardID, pRes->nScore);
        pRes = CResMgr<ACHIEVE_RES>::instance().get_next_res();
    }

    return TRUE;
Exit0:
    return FALSE;
}

BOOL CTestModule::uninit(void)
{
    return TRUE;
Exit0:
    return FALSE;
}