#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subset(vector<int> mainArr);

int main()
{
    vector<int> mainArr = {1, 2, 2};
    vector<vector<int>> subsetRes = subset(mainArr);
    for(int i = 0 ; i < subsetRes.size(); i++){
        for(int j = 0; j < subsetRes[i].size(); j++){
            cout << subsetRes[i][j];
        }
        cout << endl;
    };
    return 0;
}

vector<vector<int>> subset(vector<int> mainArr){
    sort(mainArr.begin(), mainArr.end());
    vector<vector<int>> subsets;
    subsets.push_back({});
    int start = 0, ending = 0;
    for(int i = 0; i < mainArr.size(); i++){
        if(i > 0 && mainArr[i] == mainArr[(i-1)]) start = ending;
        else start = 0;
        ending = subsets.size();
        for(int j = start; j < ending; j++){
            subsets.push_back(subsets[j]);
            subsets.back().push_back(mainArr[i]);
        }
    }
    return subsets;
}
