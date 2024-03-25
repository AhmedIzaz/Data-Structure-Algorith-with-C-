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

void mergeArr(vector<int>& numbers, int left, int mid, int right){
    vector<int> ar1, ar2;
    int l1=mid-left+1, l2=right-mid;

    for(int i=left; i <= mid; i++){
        ar1.push_back(numbers[i]);
    };
    for(int i=mid+1; i <= right; i++){
        ar2.push_back(numbers[i]);
    };
    int i = 0, j = 0, k = left;
    while(i < l1 && j < l2){
        if(ar1[i] < ar2[j]){
            numbers[k++] = ar1[i++];
        }else{
            numbers[k++] = ar2[j++];
        }
    };
     while(i < l1){
            numbers[k++] = ar1[i++];
    };
     while(j < l2){
            numbers[k++] = ar2[j++];
    };
};

void mergeSort(vector<int>& numbers, int left, int right){
    if(left>=right) return;
    int mid = left+(right-left)/2;
    mergeSort(numbers, left, mid);
    mergeSort(numbers, mid+1, right);
    mergeArr(numbers, left, mid, right);
};

















