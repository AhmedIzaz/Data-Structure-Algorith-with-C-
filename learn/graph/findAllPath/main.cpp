#include <bits/stdc++.h>
using namespace std;

// all path from a node to a target node
class Edge {
public:
    int src, dst;
    Edge(int s, int d){
        this->src = s, this->dst = d;
    };
};

void findAllPaths(vector<vector<Edge>> graph, vector<int> &visited, int start, string s, int target);

int main()
{

    vector<int> visited(5, false);
    vector<vector<Edge>> graph(6);

    Edge e1 =  Edge(0, 1);
    Edge e2 =  Edge(0, 2);
    graph[0].push_back(e1);
    graph[0].push_back(e2);


    Edge e3 =  Edge(1, 0);
    Edge e4 =  Edge(1, 3);
    graph[1].push_back(e3);
    graph[1].push_back(e4);


    Edge e5 =  Edge(2, 0);
    Edge e6 =  Edge(2, 4);
    graph[2].push_back(e5);
    graph[2].push_back(e6);


    Edge e7 =  Edge(3, 1);
    Edge e8 =  Edge(3, 5);
    graph[3].push_back(e7);
    graph[3].push_back(e8);


    Edge e9 =  Edge(4, 2);
    Edge e10 =  Edge(4, 5);
    graph[4].push_back(e9);
    graph[4].push_back(e10);


    Edge e11 =  Edge(5, 3);
    Edge e12 =  Edge(5, 4);
    graph[5].push_back(e11);
    graph[5].push_back(e12);

    findAllPaths(graph, visited, 0, "", 5);

    return 0;
}



void findAllPaths(vector<vector<Edge>> graph, vector<int> &visited, int start, string s, int target){
    visited[start] = true;
    s+= to_string(start);

    if(start == target){
        cout << s << endl;
        visited[start] = false;
        return;
    };


    for(int i = 0; i < graph[start].size(); i++){
        if(!visited[graph[start][i].dst]){
            findAllPaths(graph, visited, graph[start][i].dst, s, target);
        }
    }
    visited[start] = false;
}












