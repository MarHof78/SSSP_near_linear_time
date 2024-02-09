//
// Created by Marcel on 23.01.2024.
//

#ifndef SSSP_NEAR_LINEAR_TIME_SHORTEST_PATH_ALGORITHM_H
#define SSSP_NEAR_LINEAR_TIME_SHORTEST_PATH_ALGORITHM_H
#include <boost/config.hpp>
#include <vector>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/graph_traits.hpp>
#include <boost/property_map/property_map.hpp>

class Shortest_path {
private:
    typedef boost::adjacency_list <boost::listS, boost::vecS, boost::directedS, boost::no_property,
            boost::property<boost::edge_weight_t, int> > graph_t;
    typedef boost::graph_traits<graph_t>::vertex_descriptor vertex_descriptor;


public:
    void shortest_path_algorithm(boost::adjacency_list <boost::listS, boost::vecS, boost::directedS, boost::no_property,boost::property<boost::edge_weight_t, int> >graph,
                                 vertex_descriptor source, boost::property_map<graph_t, boost::edge_weight_t>::type weight_pmap,
                                 char name[], int size);

};
#endif //SSSP_NEAR_LINEAR_TIME_SHORTEST_PATH_ALGORITHM_H
