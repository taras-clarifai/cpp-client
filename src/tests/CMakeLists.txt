cmake_minimum_required(VERSION 3.13)

project(clientlib_tests_project CXX)

set(SOURCES tests_main.cpp tests_predict.cpp)

add_executable(clientlib_test ${SOURCES})

target_include_directories(clientlib_test PRIVATE ${GTEST_SOURCE_DIR}/googletest/include)
target_include_directories(clientlib_test PRIVATE ${GTEST_SOURCE_DIR}/include)

target_link_libraries(clientlib_test gtest_main)
target_link_libraries(clientlib_test clarifai)

add_test(NAME ClientLibTest COMMAND clientlib_test)
