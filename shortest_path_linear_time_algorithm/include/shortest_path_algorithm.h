//
// Created by Marcel on 23.01.2024.
//

#ifndef SSSP_NEAR_LINEAR_TIME_SHORTEST_PATH_ALGORITHM_H
#define SSSP_NEAR_LINEAR_TIME_SHORTEST_PATH_ALGORITHM_H
#include <iostream>
#include <list>

class Graph {
private:
    int vertices;
    std::list<int>* adjacencyList;

public:
    Graph(int vertices);
    void addEdge(int src, int dest);
    void printGraph();
};
#endif //SSSP_NEAR_LINEAR_TIME_SHORTEST_PATH_ALGORITHM_H
