//
// Created by Marcel on 06.02.2024.
//
#include <boost/config.hpp>
#include <iostream>
#include <fstream>
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/dijkstra_shortest_paths.hpp>
#include <boost/property_map/property_map.hpp>

#ifndef SSSP_NEAR_LINEAR_TIME_DJKSTRA_H
#define SSSP_NEAR_LINEAR_TIME_DJKSTRA_H
class Djkstra {

private:
    typedef boost::adjacency_list <boost::listS, boost::vecS, boost::directedS, boost::no_property,
            boost::property<boost::edge_weight_t, int> > graph_t;
    typedef boost::graph_traits<graph_t>::vertex_descriptor vertex_descriptor;

public:

    void djkstra(boost::adjacency_list <boost::listS, boost::vecS, boost::directedS, boost::no_property,boost::property<boost::edge_weight_t, int> >graph,
                 vertex_descriptor source, vertex_descriptor goal,
                 std::vector<vertex_descriptor> predecessor_map, std::vector<int> distance_map, char name[]);
};
#endif //SSSP_NEAR_LINEAR_TIME_DJKSTRA_H
