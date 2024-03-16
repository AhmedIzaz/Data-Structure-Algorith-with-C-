#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int>& numbers, int left, int right);

int main()
{
    vector<int> numbers = {8, 3, 4, 12, 5, 6, 9, 1230};
    mergeSort(numbers, 0, numbers.size()-1);
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    };
    return 0;
}

void mergeNumbers(vector<int>&numbers, int left, int mid, int right){
    vector<int> n1, n2;
    int n1Length = mid-left+1, n2Length = right - mid;

    for(int i = left; i <= mid; i++){
        n1.push_back(numbers[i]);
    };
    for(int i = mid+1; i <= right; i++){
        n2.push_back(numbers[i]);
    };
    int n1Remainer = 0, n2Remainer = 0, starter = left;
    while(n1Remainer < n1Length && n2Remainer < n2Length){
        if(n1[n1Remainer] < n2[n2Remainer]){
            numbers[starter] = n1[n1Remainer++];
        }else{
            numbers[starter] = n2[n2Remainer++];
        }
        starter++;
    };
    while(n1Remainer < n1Length){
        numbers[starter++] = n1[n1Remainer++];
    };
     while(n2Remainer < n2Length){
        numbers[starter++] = n2[n2Remainer++];
    };

};

void mergeSort(vector<int> &numbers, int left, int right){
    if(left >= right) return;
    int mid = left+((right - left)/2);
    mergeSort(numbers, left, mid);
    mergeSort(numbers, mid+1, right);
    mergeNumbers(numbers, left, mid, right);
};
