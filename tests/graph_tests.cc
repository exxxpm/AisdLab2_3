#include <graph.cc>
#include <gtest/gtest.h>

TEST(hash_table_test,constructor_params){
    Graph<int,double> graph;
    graph.add_vertex(3);
    ASSERT_TRUE(graph.has_vertex(3));
}