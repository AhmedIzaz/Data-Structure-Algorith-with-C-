#include <bits/stdc++.h>
using namespace std;
// n queen problem means; there will be 2 dimensional array of n length [n][n].
// so can we put those n as '1' at a position so that they cannot cut each other
// by column, row and diagonally.. remember we must check about all queens means n
// if not than return false, if ? then true. Thats it!
bool nQueen (vector<vector<int>>& arr, int x, int n);

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
    vector<vector<int>> arr(n, vector<int>(n, 0));

    if(!nQueen(arr, 0, n)){
        cout << "Cannot\n";
    }else{
        cout  << "Yes, Can make it \n ============== After ============= \n";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << arr[i][j] << " ";
            };
            cout << endl;
        };
    };
	return 0;
};

bool isSafe(vector<vector<int>>& arr, int x, int y, int n){
    // check upper rows
    for(int i = x-1; i >= 0; i--){
        if(arr[i][y] == 1) {
            return false;
        };
    };
    // check left diagonal
    int row = x - 1;
    int col = y - 1;
    while(row >= 0 && col >= 0){
        if(arr[row--][col--] == 1) return false;
    };
    // now check right diagonal
    row = x - 1;
    col = y + 1;
    while(row >= 0 && col < n){
        if(arr[row--][col++] == 1) return false;
    };
    return true;
};

bool nQueen (vector<vector<int>>& arr, int x, int n){
    if(x >= n) return true;
    for(int col = 0; col < n; col++){
        if(isSafe(arr, x, col, n)){
            arr[x][col] = 1;
            bool isAble = nQueen(arr, x+1, n);
            if(isAble) return true;
            arr[x][col] = 0;
        }
    };
    return false;
};


