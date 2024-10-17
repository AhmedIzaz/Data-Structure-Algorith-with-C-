#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int src, dst;
    Edge(int s, int d) : src(s), dst(d){};
};

int main(){

    vector<vector<Edge>> graphList(6);


    graphList[0].push_back(Edge(0, 1));
    graphList[0].push_back(Edge(0, 2));
    graphList[0].push_back(Edge(0, 3));

    graphList[1].push_back(Edge(1, 0));
    graphList[1].push_back(Edge(1, 2));

    graphList[2].push_back(Edge(2, 1));
    graphList[2].push_back(Edge(2, 0));

    graphList[3].push_back(Edge(3, 0));
    graphList[3].push_back(Edge(3, 5));
    graphList[3].push_back(Edge(3, 4));

    graphList[4].push_back(Edge(4, 3));
    graphList[4].push_back(Edge(4, 5));

    graphList[5].push_back(Edge(5, 3));
    graphList[5].push_back(Edge(5, 4));

    return 0;
};

void tarjanDFS(vector<vector<Edge>> &graphList,int &visited, int src, int parent,
                vector<int> &dt, vector<int> &ldt, int time){


    visited[src] = true;
    ++time;
    dt[src] = time;
    ldt[src] = time;
    int children = 0;

    for(int i = 0; i < graphList[src].size(); i++){
        Edge e = graphList[src][i];

        if(e.dst == parent) continue;

        if(visited[e.dst]){
            ldt[src]  = min(ldt[src], dt[e.dst]);
        };

        if(!visited[e.dst]){
            dfs(graphList, visited, e.dst, src, dt, ldt, time);
            ldt[src] = min(ldt[src], ldt[e.dst]);
            // articulation point condition
            children++;
        };
    };

    // articulation point condition
};

void tarjanAlgo(vector<vector<Edge>> &graphList, int V){
    vector<bool> visited(V, false);
    vector<int> dt(V);
    vector<int> ldt(V);
    int time = -1;

    for(int i = 0; i < V; i++){
        if(!visited[i]){
            tarjanDFS(graphList, visited, i, -1, dt, ldt, time);
        }
    };

}






