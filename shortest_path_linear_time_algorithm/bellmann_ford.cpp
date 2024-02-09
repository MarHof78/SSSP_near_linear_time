//
// Created by Marcel on 07.02.2024.
//

#include "bellmann_ford.h"


void Bellmann_Ford::bellmann_ford(
        boost::adjacency_list<boost::listS, boost::vecS, boost::directedS, boost::no_property, boost::property<boost::edge_weight_t, int>> graph,
        vertex_descriptor source, boost::property_map<graph_t, boost::edge_weight_t>::type weight_pmap, char name[], int size) {

    auto N = size;

    std::vector<int> distance(N, (std::numeric_limits < short >::max)());
    std::vector<std::size_t> parent(N);
    int j;
    for (j = 0; j < N; ++j)
        parent[j] = j;
    distance[source] = 0;
#if defined(BOOST_MSVC) && BOOST_MSVC <= 1300
    bool r = bellman_ford_shortest_paths
    (g, int(N), weight_pmap, &parent[0], &distance[0],
     closed_plus<int>(), std::less<int>(), default_bellman_visitor());
#else
    bool r = bellman_ford_shortest_paths
            (graph, N, weight_map(weight_pmap).distance_map(&distance[0]).
                    predecessor_map(&parent[0]));
#endif

    if (r) {
        int i;
        for (i = 0; i < N; ++i)
            std::cout << name[i] << ": " << std::setw(3) << distance[i]
                      << " " << name[parent[i]] << std::endl;
    }
    else
        std::cout << "negative cycle" << std::endl;
}

