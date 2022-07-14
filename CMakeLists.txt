cmake_minimum_required (VERSION 3.20)

project(server)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

#set(CMAKE_VERBOSE_MAKEFILE on)

include (precompile)
include (project)
include (toluapp)
include (fetch_content)

fetch_content(server_base https://github.com/nearmeng/server_base.git master)
fetch_content(app_proto https://github.com/nearmeng/app_proto.git master)

init_project ()
pre_toluapp(${BASE_DIR}/src/script)

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