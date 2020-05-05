cmake_minimum_required(VERSION 3.13)

project(CPP_CLARIFAI_CLIENT CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)

set(GTEST_SOURCE_DIR ${PROJECT_SOURCE_DIR}/vendors/gtest)
set(CLIENTLIB_ROOT_DIR ${PROJECT_SOURCE_DIR})

#add_definitions(-DGTEST_HAS_SEH=0)

# Code Coverage Configuration
add_library(coverage_config INTERFACE)

option(CODE_COVERAGE "Enable coverage reporting" OFF)
if(CODE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  # Add required flags (GCC & LLVM/Clang)
  target_compile_options(coverage_config INTERFACE
    -O0        # no optimization
    -g         # generate debug info
    --coverage # sets all required flags
  )
  if(CMAKE_VERSION VERSION_GREATER_EQUAL 3.13)
    target_link_options(coverage_config INTERFACE --coverage)
  else()
    target_link_libraries(coverage_config INTERFACE --coverage)
  endif()
endif()

add_subdirectory(src/clientlib)

option (BUILD_TESTING "Build the testing tree." OFF)
# Only build all if we are the top-level project
# Allows this to be used by super projects with `add_subdirectory`
if (BUILD_TESTING OR (PROJECT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR))
    enable_testing()

    add_subdirectory(vendors/gtest)
    add_subdirectory(src/tests)
endif()
