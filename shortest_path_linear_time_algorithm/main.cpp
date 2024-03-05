
#include <iostream>
#include "djkstra.h"
#include "bellmann_ford.h"
#include "shortest_path_algorithm.h"
//#include "print_graph.hpp"

typedef boost::adjacency_list <boost::listS, boost::vecS, boost::directedS, boost::no_property,
        boost::property<boost::edge_weight_t, int> > graph_t;
typedef boost::graph_traits<graph_t>::vertex_descriptor vertex_descriptor;
typedef std::pair<int, int> Edge;

int main()
{
// define the graph and compute bellmann ford, djkstra and the new shortest_path_algorithm
    using namespace boost;

    const int num_nodes = 5;
    enum nodes { A, B, C, D, E ,N};
    char name[] = { 'A', 'B', 'C', 'D', 'E' };
    //char name[] = "ABCDE";
    Edge edge_array[] = { Edge(A, C), Edge(B, B), Edge(B, D), Edge(B, E),
                          Edge(C, B), Edge(C, D), Edge(D, E), Edge(E, A), Edge(E, B)
    };

    int weights[] = { 1, 2, 1, 2, 7, 3, 1, 1, 1 };
    int num_arcs = sizeof(edge_array) / sizeof(Edge);

    // Graph created from the list of edges
    graph_t g(edge_array, edge_array + num_arcs, weights, N);

    // Create property_map from edges to weights
    boost::property_map<graph_t, boost::edge_weight_t>::type weightmap = get(boost::edge_weight, g);

    // Create vectors to store the predecessors (p) and the distances from the root (d)
    std::vector<vertex_descriptor> predecessor_map(num_vertices(g));
    std::vector<int> distance_map(num_vertices(g));

    // Create descriptor for the source node
    vertex_descriptor source = vertex(A, g);
    vertex_descriptor goal = vertex(E, g);

    Djkstra test;
    test.djkstra(g, source, goal, predecessor_map, distance_map, name);

    Bellmann_Ford test2;
    test2.bellmann_ford(g, source, weightmap, name, num_nodes);

    Shortest_path test3;
    test3.shortest_path_algorithm(g, source, weightmap, name, num_nodes);

    return 0;
}

