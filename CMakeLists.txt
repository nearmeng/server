cmake_minimum_required (VERSION 3.20)

project(server)

include (FetchContent)
FetchContent_Declare(cmake_tool GIT_REPOSITORY https://github.com/nearmeng/cmake_tools.git GIT_TAG master)
FetchContent_MakeAvailable(cmake_tool)

fetch_content(server_base https://github.com/nearmeng/server_base.git master)
fetch_content(app_proto https://github.com/nearmeng/app_proto.git master)

init_project ()
pre_toluapp(src/script)

pre_project(server RUNTIME)
add_project()
post_project()

target_include_directories(${TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
target_link_libraries (${TARGET_NAME}
    mango::server_base
	mango::cs_proto
	mango::ss_proto
	mango::db_proto
    3rd::gworld::gamespace
)