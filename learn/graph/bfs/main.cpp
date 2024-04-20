#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int src, dst;
    Edge(int s, int d){
        this->src = s, this->dst = d;
    };
};

void bfs(vector<vector<Edge>> graph, vector<int> &visited, int start);

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

    for(int i=0; i<visited.size(); i++){
       if(!visited[i]) bfs(graph, visited, i);
    };

    return 0;
}


void bfs(vector<vector<Edge>> graph, vector<int> &visited, int start){
    queue<int> q;
    q.push(visited[start]);

    while(q.size()!=0){
        int src = q.front();
        if(!visited[src]){
            cout << src << " ";
            visited[src] = true;
            for(int i = 0; i < graph[src].size(); i++){
                q.push(graph[src][i].dst);
            };
        };
        q.pop();
    };
};






















