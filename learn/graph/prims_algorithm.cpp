#include <bits/stdc++.h>
using namespace std;

class Edge {
public:
    int src, dst, weight;
    Edge(int s, int d, int w) {
        this->src = s;
        this->dst = d;
        this->weight = w;
    }
};
// prims algorithm detect minimum spanning tree of no cycle, all node connected , all edge sum is minimum than all other comibination of vertex connection
void primsAlgorithm(vector<vector<Edge>> &graphList, vector<bool> &visited,int src);

int main(){
    vector<vector<Edge>> graphList(6);
    vector<bool> visited(6, false);

    Edge e1 = Edge(0, 1, 2);
    Edge e1_rev = Edge(1, 0, 2);
    graphList[0].push_back(e1);
    graphList[1].push_back(e1_rev);

    Edge e2 = Edge(0, 2, 4);
    Edge e2_rev = Edge(2, 0, 4);
    graphList[0].push_back(e2);
    graphList[2].push_back(e2_rev);

    Edge e3 = Edge(1, 3, 7);
    Edge e3_rev = Edge(3, 1, 7);
    graphList[1].push_back(e3);
    graphList[3].push_back(e3_rev);

    Edge e4 = Edge(1, 2, 1);
    Edge e4_rev = Edge(2, 1, 1);
    graphList[1].push_back(e4);
    graphList[2].push_back(e4_rev);

    Edge e5 = Edge(2, 3, 3);
    Edge e5_rev = Edge(3, 2, 3);
    graphList[2].push_back(e5);
    graphList[3].push_back(e5_rev);

    Edge e6 = Edge(3, 4, 5);
    Edge e6_rev = Edge(4, 3, 5);
    graphList[3].push_back(e6);
    graphList[4].push_back(e6_rev);

    Edge e7 = Edge(4, 5, 8);
    Edge e7_rev = Edge(5, 4, 8);
    graphList[4].push_back(e7);
    graphList[5].push_back(e7_rev);

    primsAlgorithm(graphList, visited, 0);

    return 0;
};

struct Comparetor {
    bool operator() (const pair<int, int> &p1, const pair<int, int> &p2){
        return p1.second > p2.second;
    };
};


void primsAlgorithm(vector<vector<Edge>> &graphList, vector<bool> &visited, int src){
    priority_queue<pair<int, int>, vector<pair<int, int>>, Comparetor> pq;
    int minimum_cost = 0;
    // initialize pq with first node
    pq.push({src, 0});

    while(!pq.empty()){
        pair<int, int> source = pq.top();
        pq.pop();

        if(!visited[source.first]){
            visited[source.first] = true;
            minimum_cost += source.second;

            for(int i = 0; i < graphList[source.first].size(); i++){
                Edge e = graphList[source.first][i];

                if(!visited[e.dst]){
                    pq.push({e.dst, e.weight});
                };
            };
        };

    };
    cout << "Minimum Cost is = " << minimum_cost << endl;

};









