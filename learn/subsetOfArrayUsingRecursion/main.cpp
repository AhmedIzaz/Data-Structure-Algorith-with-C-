#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subsetOfArrayInt(vector<int> mainArr, int index, vector<vector<int>> subsetResult);

int main()
{
    vector<int> mainArr = {1, 2, 3};
    vector<vector<int>> initializer;
    vector<vector<int>> subsetRes = subsetOfArrayInt(mainArr, 0, initializer);

    for(int i = 0 ; i < subsetRes.size(); i++){
        for(int j = 0; j < subsetRes[i].size(); j++){
            cout << subsetRes[i][j];
        }
        cout << endl;
    };

    return 0;
}


vector<vector<int>> subsetOfArrayInt(vector<int> mainArr, int index, vector<vector<int>> subsetResult){
    if(index >= mainArr.size()){
        return subsetResult;
    };
    int subsetResultSize = subsetResult.size();
    for(int i = 0; i < subsetResultSize; i++){
        vector<int> indexedItem = subsetResult[i];
        indexedItem.push_back(mainArr[index]);
        subsetResult.push_back(indexedItem);
    };
    vector<int> indexedArray;
    indexedArray.push_back(mainArr[index]);
    subsetResult.push_back(indexedArray);
    return subsetOfArrayInt(mainArr, index+1, subsetResult);
};
