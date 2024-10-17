#include <bits/stdc++.h>
using namespace std;

// DNF sort is mostly used for an array where only 3 kind of value exist, like we are using only 0, 1, 2
// {0, 1, 1, 1, 0, 1, 2, 2}
//      l   m          h

vector<int> dnf(vector<int>arr){
    int low = 0, mid = 0;
    int high = arr.size()-1;
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid], arr[high]);
            high--;
        }
    };
    return arr;
};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1, 2, 2, 1, 0, 1, 1, 0};
    vector<int> sortedArr = dnf(arr);
    for(auto i : sortedArr){
        cout << i << " ";
    };
    cout << endl;
    return 0;
};
