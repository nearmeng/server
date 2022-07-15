Include("util.lua");

base_config = 
{
	nTestValue = 1;
	nInitBtCtxCount = 100;
	nInitBtEventCount = 100;
	nInitBtGlobalEventListCount = 100;
	nInitTimerPoolCount = 100;

	nInitShmSize = 100 * 1024 * 1024;
		
	nServerStopTimeout = 20 * 1000;
	nServerEndWaitTimeout = 3 * 1000;
        
    szScriptPath = "../script";
    szResPath = "../res";
        
    nResMode = rlmCsv;

    DumpConfig =
    {
        bIsMiniDump = false,
        nDumpInterval = 30 * 60 * 1000,
    },
        
    nCommonCoroCount = 100;
    nCoroWaitTimeInterval = 10 * 1000;
    szServerConfigName = "server_config";
};

server_config = 
{
	nTestValue = 1;
    nUserCount = 100;
    nRoleCount = 100;
    nUserKickAfterSessionStopTime = 60 * 1000;
	nClientPingTimeout = 10 * 1000;
    nInitDefaultClientSessionCount = 100;
};