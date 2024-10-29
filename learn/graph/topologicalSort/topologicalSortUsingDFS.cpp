#include <bits/stdc++.h>
using namespace std;


class Edge {
public:
    int src, dst;
    Edge(int s, int d){
        this->src = s, this->dst = d;
    };
};

void topologicalSort(vector<vector<Edge>> graph, vector<int> &visited,stack<int> &sortStack,  int start);

int main()
{

    vector<int> visited(4, false);
    vector<vector<Edge>> graph(4);
    stack<int> sortStack;

    Edge e1 =  Edge(0, 1);
    Edge e2 =  Edge(0, 2);
    graph[0].push_back(e1);
    graph[0].push_back(e2);

    Edge e3 =  Edge(1, 2);
    graph[1].push_back(e3);

    Edge e4 =  Edge(2, 3);
    graph[2].push_back(e4);



    for(int i=0; i<visited.size(); i++){
       if(!visited[i]) topologicalSort(graph, visited, sortStack, i);
    };
    while(!sortStack.empty()){
        cout << sortStack.top() << " ";
        sortStack.pop();
    };
    return 0;
}


void topologicalSort(vector<vector<Edge>> graph, vector<int> &visited,stack<int> &sortStack, int start){
    visited[start] = true;

    vector<Edge> edges = graph[start];
    for(int i=0; i < edges.size(); i++){
        if(!visited[graph[start][i].dst]){
            topologicalSort(graph, visited, sortStack, graph[start][i].dst);
        }
    };

    sortStack.push(start);
};
