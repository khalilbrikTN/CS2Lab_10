//
// Created by Mohamed Khalil on 5/17/2023.
//
#include <iostream>
#include <string>
#include "DirectedUnweightedGraph.h"

using namespace std;



DirectedUnweightedGraph::DirectedUnweightedGraph(int count){
    numberOfVertices = count;
    for(int i = 0; i<count;i++){
        visited[i] = false;
    };

    for(int i = 0;i<numberOfVertices;i++){
        adjacencyList.push_back(vector<int>());
    };

};
void DirectedUnweightedGraph::DFS(int c) {
    visited[c] = true;

    for(int i = 0; i < adjacencyList[0].size(); i++){
        int child = adjacencyList[0][i];
        if(!visited[child]){
            DFS(child);
        }
    }


void DirectedUnweightedGraph::BFS(){


    visited[0] = true;
    q.push(0);

    while (!q.empty()){
        int x = q.front();
        q.pop();

        for(int i = 0; i < adjacencyList[x].size(); i++){
            int child = adjacencyList[x][i];
            if(!visited[child]){
                visited[child] = true;
                q.push(child);
            }
        }
    }
}




void DirectedUnweightedGraph::addEdge(Edge edge){
    adjacencyList[edge.source].insert(adjacencyList.at(edge.source).begin(),edge.destination);
};
void DirectedUnweightedGraph::viewGraph(){

    for(int i = 0;i<adjacencyList.size();i++){
        cout<<i<<" --> ";
        for(int j = 0;j<adjacencyList.at(i).size();j++){
            cout<<adjacencyList.at(i).at(j)<<" ";
        }
        cout<<endl;
        }
}
