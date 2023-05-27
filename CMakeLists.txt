cmake_minimum_required(VERSION 3.16.3)

project(05.homework)

#add_executable(random_shuffle random_shuffle.cpp)
#set_target_properties(random_shuffle PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

#add_executable(chrono_example chrono_example.cpp)
#set_target_properties(chrono_example PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

add_executable(statistics 
    src/main.cpp
    src/statistic/min.cpp
    src/statistic/max.cpp
    src/statistic/mean.cpp
    src/statistic/std.cpp
    src/statistic/pct.cpp
)

target_include_directories(statistics PRIVATE
    include
    include/statistic
)

set_target_properties(statistics PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)

