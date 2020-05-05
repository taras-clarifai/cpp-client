cmake_minimum_required(VERSION 3.13)

project(clientlib CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)

set(SOURCES 
    client.cpp)

set(HEADERS
    clientlib_global.h
    client.h)

file(GLOB_RECURSE PROTO_SOURCES proto/**/*.cc)
file(GLOB_RECURSE PROTO_HEADERS proto/**/*.h)

add_library(clarifai STATIC SHARED ${SOURCES} ${HEADERS} ${PROTO_SOURCES} ${PROTO_HEADERS})

target_include_directories(clarifai PRIVATE ${CLIENTLIB_ROOT_DIR}/src/clientlib)

target_link_libraries(clarifai debug coverage_config)
target_link_libraries(clarifai grpc++)

if(WIN32)
    target_link_libraries(clarifai
        debug libcurl_debug
        optimized libcurl)
else()
    target_link_libraries(clarifai curl)
endif()

install(TARGETS clarifai DESTINATION lib)
