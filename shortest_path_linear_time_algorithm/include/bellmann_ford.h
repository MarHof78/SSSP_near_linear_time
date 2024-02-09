//
// Created by Marcel on 06.02.2024.
//
#include <boost/config.hpp>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/graph_traits.hpp>
#include <boost/property_map/property_map.hpp>
#include <boost/graph/bellman_ford_shortest_paths.hpp>

#ifndef SSSP_NEAR_LINEAR_TIME_BELLMANN_FORD_H
#define SSSP_NEAR_LINEAR_TIME_BELLMANN_FORD_H
class Bellmann_Ford {
private:
    typedef boost::adjacency_list <boost::listS, boost::vecS, boost::directedS, boost::no_property,
            boost::property<boost::edge_weight_t, int> > graph_t;
    typedef boost::graph_traits<graph_t>::vertex_descriptor vertex_descriptor;

public:

    void bellmann_ford(boost::adjacency_list <boost::listS, boost::vecS, boost::directedS, boost::no_property,boost::property<boost::edge_weight_t, int> >graph,
                       vertex_descriptor source, boost::property_map<graph_t, boost::edge_weight_t>::type weight_pmap,
                       char name[], int size);
};
#endif //SSSP_NEAR_LINEAR_TIME_BELLMANN_FORD_H
