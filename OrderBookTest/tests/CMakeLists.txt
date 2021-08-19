include_directories(${g_test_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_executable(RunTests SomeTests.cpp)
target_link_libraries(RunTests gtest gtest_main OrderBookMain)