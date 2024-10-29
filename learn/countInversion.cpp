#include <bits/stdc++.h>
using namespace std;

// count inversion means , in a given integer array
// if in any two index suppose i and j where i < j but a[i] > a[j]
// then you have to track the count from every index to last remaining

// by brute force solution
long long countInversion_BruteForce(vector<int> arr){
    long long inv = 0;
    for(int i = 0; i < arr.size(); i++){
        for(int j = i + 1; j < arr.size(); j++){
            if(arr[i] > arr[j]) inv++;
        };
    };
    return inv;
};

// by optimize solution, we have to follow merge sort technique
// where during merging both array we gonna calculate inversion of array
// by optimize way

long long mergeInversion(vector<int>& arr, int left, int mid, int right){
    long long inv = 0;
    int n1 = mid - left + 1, n2 = right - mid;

    vector<int> arr1;
    vector<int> arr2;

    for(int i = left; i <= mid; i++){
        arr1.push_back(arr[i]);
    };
    for(int i = mid+1; i <= right; i++){
        arr2.push_back(arr[i]);
    };

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            arr[(k++)] = arr1[(i++)];
        }else{
            inv += n1 - i;
            arr[(k++)] = arr2[(j++)];
        };
    };

    while(i < n1){
        arr[(k++)] = arr1[(i++)];
    };

    while(j < n2){
        arr[(k++)] = arr2[(j++)];
    };

    return inv;
}

long long mergeSort(vector<int>& arr, int left, int right){
    long long inv = 0;
    if(left < right){
        int mid =  left+((right - left) / 2) ;
        inv += mergeSort(arr, left, mid);
        inv += mergeSort(arr, mid+1, right);
        inv += mergeInversion(arr, left, mid, right);
    };
    return inv;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {2, 3, 6, 3, 2, 1};
    cout << countInversion_BruteForce(arr) << endl;


    cout << mergeSort(arr, 0, (arr.size()-1)) << endl;
    return 0;
};
