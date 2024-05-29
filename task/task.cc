#include <graph.cc>
#include <iostream>

int main(){
    Graph<int,double> graph;
    graph.add_vertex(1);
    graph.add_vertex(2);
    graph.add_vertex(3);
    graph.add_vertex(4);
    graph.add_edge(1,2,-1);
    graph.add_edge(1,4,6);
    graph.add_edge(2,3,4);
    graph.add_edge(3,1,5);
    graph.add_edge(3,4,-2);

    graph.walk(1,[](int vert){std::cout<<vert<<" ";});

    std::cout<<std::endl;
    auto res=graph.shortest_path(1,4);
    std::cout<<"\nshortest path from 1 to 4:\n";
    for(const auto& edge:res) std::cout<<edge;
    return 0;
}