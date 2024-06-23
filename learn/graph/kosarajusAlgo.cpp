
#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int src, dst;
    Edge(int s, int d){
        this->src = s, this->dst = d;
    };
};
// strongly connected component
void scc(vector<vector<Edge>> &graphList, vector<bool> &visited, int totalVertex);

int main(){
    vector<vector<Edge>> graphList(5);
    vector<bool> visited(5, false);

    graphList[0].push_back(Edge(0, 1));

    graphList[1].push_back(Edge(1, 2));

    graphList[2].push_back(Edge(2, 0));
    graphList[2].push_back(Edge(2, 3));

    graphList[3].push_back(Edge(3, 4));

    // SCC call
    scc(graphList, visited, 5);

    return 0;
};

vector<vector<Edge>> transposeGraph(vector<vector<Edge>> &graphList, int v){
    vector<vector<Edge>> newGraphList(v);

    for(int i = 0; i < graphList.size(); i++){
        for(int j = 0; j < graphList[i].size(); j++){
            Edge e = graphList[i][j];
            newGraphList[e.dst].push_back(Edge(e.dst, e.src));
        };
    };

    return newGraphList;
};

// DFS
void dfs(vector<vector<Edge>> &graphList, vector<bool> &visited,  int src){
    visited[src] = true;
    cout << src << " ";

    for(int i = 0; i < graphList[src].size(); i++){
        Edge e = graphList[src][i];
        if(!visited[e.dst]){
            dfs(graphList, visited, e.dst);
        };
    };
};


// topological sort
void topsort(vector<vector<Edge>> &graphList, vector<bool> &visited, stack<int> &st, int src){

    visited[src] = true;

    for(int i = 0; i < graphList[src].size(); i++){
        Edge e = graphList[src][i];
        if(!visited[e.dst]){
            topsort(graphList, visited, st, e.dst);
        };
    };

    st.push(src);
};


void scc(vector<vector<Edge>> &graphList, vector<bool> &visited, int totalVertex){
    // step 1 : insert vertex into stack in topological sorting order
    stack<int> st;
    topsort(graphList, visited, st, 0);

    // step 2 : transpose graph
    vector<vector<Edge>> transposedGraph = transposeGraph(graphList, totalVertex);

    // run DFS to transpose graph according to stack
    fill(visited.begin(), visited.end(), false);
    while(!st.empty()){
        int node = st.top();
        st.pop();
        if(!visited[node]){
            dfs(transposedGraph, visited, node);
            cout << endl;
        };
    };


};


