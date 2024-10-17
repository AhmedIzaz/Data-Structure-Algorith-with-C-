#include <bits/stdc++.h>
using namespace std;


vector<int> countSort(vector<int>arr, int arrSize){
    int maxValue = (*max_element(arr.begin(), arr.end()) )+ 1;
    vector<int> countArr(maxValue, 0);
    vector<int> resultArr(arrSize, 0);

    for(auto i : arr){
        countArr[i]++;
    };

    for(int i = 1; i < maxValue; i++){
            countArr[i] += countArr[(i-1)];
    };

    for(int i = arrSize-1; i >=0; i--){
        resultArr[--countArr[arr[i]]] = arr[i];
    };

    return resultArr;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1, 2, 4, 1, 2, 45, 12, 42, 4};
    vector<int> sortedArray = countSort(arr, arr.size());

    for(auto i : sortedArray){
            cout << i << " ";
    };
    cout << "\n";

    return 0;
};
