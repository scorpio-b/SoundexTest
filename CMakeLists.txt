cmake_minimum_required(VERSION 4.0)
project(SoundexTest)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest REQUIRED)
add_executable(SoundexTest
        SoundexTest.cpp)
target_link_libraries(SoundexTest
   GTest::gtest_main GTest::gmock_main pthread
)