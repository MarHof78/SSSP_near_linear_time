cmake_minimum_required(VERSION 3.21)
project(SSSP_near_linear_time)

set(CMAKE_CXX_STANDARD 14)


include_directories(C:/Users/Marcel/Downloads/boost_1_66_0/boost_1_66_0)
include_directories(shortest_path_linear_time_algorithm/include)

add_executable(SSSP_near_linear_time
        #shortest_path_linear_time_algorithm/shortest_path_algorithm.cpp
        #shortest_path_linear_time_algorithm/djkstra.cpp
        #shortest_path_linear_time_algorithm/bellmann_ford.cpp
        shortest_path_linear_time_algorithm/main.cpp
        shortest_path_linear_time_algorithm/djkstra.cpp
        shortest_path_linear_time_algorithm/bellmann_ford.cpp
        shortest_path_linear_time_algorithm/shortest_path_algorithm.cpp
        )
