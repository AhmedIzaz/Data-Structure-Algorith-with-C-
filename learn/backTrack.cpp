#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>>& arr, int x, int y, int n){
    if(x < n && y < n && arr[x][y] == 1) return true;
    return false;
};
bool isMaze(vector<vector<int>>& arr, int x, int y, int n,vector<vector<int>>& solArr){
    if(x == n-1 && y == n-1) {
        solArr[x][y] = 1;
        return true;
    };
    if(isSafe(arr, x, y, n)){
        solArr[x][y] = 1;
        if(isMaze(arr, x+1, y, n, solArr))return true;
        if(isMaze(arr, x, y+1, n, solArr))return true;
        return false;
    };
    return false;
};

int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<vector<int>> arr;
    vector<vector<int>> solArr;

    for(int i = 0; i < n; i++){
        vector<int> ithArr;
        for(int j = 0; j<n;j++){
            int v;
            cin >> v;
            ithArr.push_back(v);
        };
        cin.ignore();
        arr.push_back(ithArr);
    };

    for(int i = 0; i < n; i++){
        vector<int> ithArr;
        for(int j = 0; j<n;j++){
            ithArr.push_back(0);
        };
        solArr.push_back(ithArr);
    };
    cout << endl;
    if(isMaze(arr, 0, 0, n, solArr)){
        for(int i = 0; i < n; i++){
            for(int j = 0; j<n;j++){
                cout << solArr[i][j] << " " ;
            };
            cout << endl;
        };

    };
    return 0;
};

// 1 0 1 0 0
// 1 1 0 0 0
// 0 1 1 0 0
// 0 1 0 0 0
// 0 1 1 1 1
