#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> ar, int val, int left, int right);

int main(){
    vector<int> ar  =  {12, 24, 56, 78, 123, 124, 126, 127, 129, 234} ;
    cout << binarySearch(ar, 234, 0, 9) << endl;
    return 0;
};


int binarySearch(vector<int> ar, int val, int left, int right){
    if(left > right) return -1;
    int mid = (left+right)/2;
    if(ar[mid] == val) return mid;

    if(val > ar[mid]) {
        return binarySearch(ar, val, mid+1, right);
    }else{
        return binarySearch(ar, val, left, mid-1);
    }

};
