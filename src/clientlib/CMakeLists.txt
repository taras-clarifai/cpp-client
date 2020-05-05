cmake_minimum_required(VERSION 3.13)

project(clientlib CXX)

set(SOURCES 
    client.cpp)

set(HEADERS
    clientlib_global.h
    client.h)

add_library(clarifai STATIC SHARED ${SOURCES} ${HEADERS})

target_include_directories(clarifai PRIVATE ${CLIENTLIB_ROOT_DIR}/src/clientlib)

target_link_libraries(clarifai debug coverage_config)

if(WIN32)
    target_link_libraries(clarifai
        debug libcurl_debug
        optimized libcurl)
else()
    target_link_libraries(clarifai curl)
endif()

install(TARGETS clarifai DESTINATION lib)
