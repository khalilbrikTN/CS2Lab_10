//
// Created by Mohamed Khalil on 5/17/2023.
//
#include <iostream>
#include "DirectedUnweightedGraph.h"

const int N=1e5;

using namespace std;

int main(){
    cout << "Graph 1:" << endl;
    DirectedUnweightedGraph graph(6);

    graph.addEdge({ 0, 1 });

    graph.addEdge({ 0, 2 });
    graph.addEdge({ 1, 2 });
    graph.addEdge({ 1, 3 });

    graph.addEdge({ 1, 4 });
    graph.addEdge({ 2, 4 });
    graph.addEdge({ 3, 5 });
    graph.addEdge({ 4, 3 });
    graph.addEdge({ 4, 5 });

    graph.viewGraph();




    cout << "Graph 2:" << endl;
    DirectedUnweightedGraph graph2(7);
    graph2.addEdge({ 0, 1 });
    graph2.addEdge({ 0, 2 });
    graph2.addEdge({ 1, 2 });
    graph2.addEdge({ 1, 3 });
    graph2.addEdge({ 1, 4 });
    graph2.addEdge({ 2, 4 });
    graph2.addEdge({ 3, 5 });
    graph2.addEdge({ 4, 3 });
    graph2.addEdge({ 4, 5 });
    graph2.addEdge({ 6, 0 });


    return 0;
}