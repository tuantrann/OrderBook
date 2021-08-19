cmake_minimum_required(VERSION 3.20)
project(OrderBook VERSION 1.0)

configure_file(OrderBookConfig.h.in OrderBookConfig.h)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCE_FILES main.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

add_subdirectory(OrderBookMain)
add_subdirectory(OrderBookTest)

target_link_libraries(${PROJECT_NAME} PUBLIC OrderBookMain)

target_include_directories(${PROJECT_NAME} PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/OrderBookMain"
        )
