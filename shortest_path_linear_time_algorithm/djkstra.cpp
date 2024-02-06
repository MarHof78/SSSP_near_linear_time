#include "djkstra.h"

void Djkstra::djkstra(boost::adjacency_list <boost::listS, boost::vecS, boost::directedS, boost::no_property,
             boost::property<boost::edge_weight_t, int> >graph, vertex_descriptor source,vertex_descriptor goal,
             std::vector<vertex_descriptor> predecessor_map, std::vector<int> distance_map, char name[]){
    boost::dijkstra_shortest_paths(graph, source,
                                   boost::predecessor_map(&predecessor_map[0]).distance_map(&distance_map[0]));
    //p[] is the predecessor map obtained through dijkstra
    //name[] is a vector with the names of the vertices
    //s and goal are vertex descriptors
    std::vector<boost::graph_traits<graph_t>::vertex_descriptor > path;
    boost::graph_traits<graph_t>::vertex_descriptor current = goal;

    while(current!=source)
    {
        path.push_back(current);
        current = predecessor_map[current];
    }
    path.push_back(source);

    // Prints the path obtained in reverse
    std::cout << "Path from " << name[source] << " to " << name[goal] << std::endl;
    std::vector<boost::graph_traits<graph_t>::vertex_descriptor >::reverse_iterator it;

    for (it = path.rbegin(); it != path.rend(); ++it) {
        std::cout << name[*it] << " ";
    }
    std::cout << std::endl;

}
