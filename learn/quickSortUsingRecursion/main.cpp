#include <bits/stdc++.h>
using namespace std;

void quickSort(vector<int> &arr, int left, int right);

int main()
{
    vector<int> arr = {8, 4, 12, 3, 7, 10, 11};
    quickSort(arr, 0, arr.size()-1);
    for(int i =0; i < arr.size(); i++){
        cout << arr[i] << " ";
    };
    return 0;
}

void swapper(vector<int> &arr, int index1, int index2){
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
};

int partition_array(vector<int> &arr, int left, int right){
    int space = left-1, i = left, pivot = arr[right];
    for(i; i < right; i++){
        if(arr[i] < pivot){
            space++;
            swapper(arr, i, space);
        }
    };
    space++;
    swapper(arr, space, right);
    return space;
};

void quickSort(vector<int> &arr, int left, int right){
    if(left >= right) return;

    int index = partition_array(arr, left, right);

    quickSort(arr, left, index-1);
    quickSort(arr, index+1, right);
};
