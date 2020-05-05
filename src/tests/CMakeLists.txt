cmake_minimum_required(VERSION 3.13)

project(clientlib_tests_project CXX)

set(SOURCES tests_main.cpp tests_predict.cpp)

add_executable(clientlib_test ${SOURCES})

target_include_directories(clientlib_test PRIVATE ${GTEST_SOURCE_DIR}/googletest/include)
target_include_directories(clientlib_test PRIVATE ${GTEST_SOURCE_DIR}/include)

target_include_directories(clientlib_test PRIVATE ${CLIENTLIB_ROOT_DIR}/src/clientlib)
target_include_directories(clientlib_test PRIVATE ${CLIENTLIB_ROOT_DIR}/src/clientlib/googleapis)
target_include_directories(clientlib_test PRIVATE ${CLIENTLIB_ROOT_DIR}/vendors/grpc)

target_link_libraries(clientlib_test gtest_main)
target_link_libraries(clientlib_test clarifai)
target_link_libraries(clientlib_test grpc++)

add_test(NAME ClientLibTest COMMAND clientlib_test)
