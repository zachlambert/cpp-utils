cmake_minimum_required(VERSION 3.14)
project(theia_driver)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(cpp-utils INTERFACE)
target_include_directories(cpp-utils INTERFACE include)

include(FetchContent)
FetchContent_Declare(googletest URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip DOWNLOAD_EXTRACT_TIMESTAMP false)
include(GoogleTest)
set(INSTALL_GTEST OFF)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(test_optional_tuple test/optional_tuple.cpp)
target_link_libraries(test_optional_tuple cpp-utils GTest::gtest_main)
gtest_discover_tests(test_optional_tuple)
