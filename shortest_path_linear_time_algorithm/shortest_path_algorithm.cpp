//
// Created by Marcel on 23.01.2024.
//

#include "include/shortest_path_algorithm.h"
Graph::Graph(int vertices) {
    this->vertices = vertices;
    adjacencyList = new std::list<int>[vertices];
}

void Graph::addEdge(int src, int dest) {
    adjacencyList[src].push_back(dest);
    adjacencyList[dest].push_back(src); // Uncomment this line if the graph is undirected
}

void Graph::printGraph() {
    for (int i = 0; i < vertices; ++i) {
        std::cout << "Adjacency list of vertex " << i << ": ";
        for (const auto& neighbor : adjacencyList[i]) {
            std::cout << neighbor << " ";
        }
        std::cout << std::endl;
    }
}