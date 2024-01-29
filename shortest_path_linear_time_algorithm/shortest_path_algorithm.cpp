#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;
    typedef std::pair<int,int> Pair;
    Pair edge_array[11] = { Pair(0,1), Pair(0,2), Pair(0,3),
                          Pair(0,4), Pair(2,0), Pair(3,0),
                          Pair(2,4), Pair(3,1), Pair(3,4),
                          Pair(4,0), Pair(4,1) };
    std::cout << "before for each shit" << "\n";
    MyGraphType G(5);
    for (int i = 0; i < 11; ++i){
        add_edge(edge_array[i].first, edge_array[i].second, G);
    }

    std::cout << "after for each shit" << "\n";
    return 0;
}

void shortest_path_algorithm(){

}