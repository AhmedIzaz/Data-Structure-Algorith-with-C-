#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int src, dst;
    Edge(int s, int d) : src(s), dst(d){};
};

int main(){

    vector<vector<Edge>> graphList(6);
    vector<bool> visited(6, false);

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
