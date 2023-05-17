//
// Created by Mohamed Khalil on 5/17/2023.
//
#include <iostream>
#include <string>
#include "DirectedUnweightedGraph.h"

using namespace std;



DirectedUnweightedGraph::DirectedUnweightedGraph(int count){
    numberOfVertices = count;
    for(int i = 0; i<numberOfVertices;i++){
        adjacencyList.push_back(vector<int>());
    };
};
void DirectedUnweightedGraph::DFS(int vertex){
    visited[vertex] = true;

    for(int i = 0; i < adjacencyList[vertex].size(); i++){
        int child = adjacencyList[vertex][i];
        if(!visited[child]){
            DFS(child);
        }
    }
}



void DirectedUnweightedGraph::BFS(int start){
    for(int i = 0; i<numberOfVertices;i++){
        visited[i] = false;
    }
    q.push(start);

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
    adjacencyList.at(edge.source).push_back(edge.destination);
};
void DirectedUnweightedGraph::viewGraph(){

    cout<<"--Graph--"<<endl;
    for(int i = 0;i<adjacencyList.size();i++){
        cout<<i<<" --> ";
        for(int j = 0;j<adjacencyList.at(i).size();j++){
            cout<<adjacencyList.at(i).at(j)<<" ";
        }
        cout<<endl;
        }
}
