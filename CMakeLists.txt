CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT(black_jack)

file(GLOB sources "src/*.cpp")

add_executable(black_jack ${sources})

target_include_directories(black_jack PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
