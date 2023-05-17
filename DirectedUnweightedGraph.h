//
// Created by Mohamed Khalil on 5/17/2023.
//

#ifndef GRAPHS_DIRECTEDUNWEIGHTEDGRAPH_H
#define GRAPHS_DIRECTEDUNWEIGHTEDGRAPH_H


#include <queue>
#include <vector>
#include <iostream>
using namespace std;

struct Edge
{
    int source;
    int destination;
};

class DirectedUnweightedGraph
{
private:
    int numberOfVertices;
    vector<vector<int>> adjacencyList;
    vector<bool> visited;

    queue<int> q; //for the BFS
    int child, x;
    void DFSRec(int vertex, vector<bool>& visited);
public:
    DirectedUnweightedGraph(int count);
    void addEdge(Edge edge);
    void viewGraph();
    void BFS(); // Breadth First Search
    void DFS(int c); // Depth First Search
};

#endif //GRAPHS_DIRECTEDUNWEIGHTEDGRAPH_H
