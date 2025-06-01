cmake_minimum_required(VERSION 3.5)
project(SoundexTest)
set(CMAKE_CXX_STANDARD 17)
find_package(GTest REQUIRED)
set(sources
   main.cpp
   SoundexTest.cpp)
add_executable(SoundexTest ${sources})
target_link_libraries(SoundexTest
   GTest::gtest_main GTest::gmock_main pthread
)