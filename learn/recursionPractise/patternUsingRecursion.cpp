#include <bits/stdc++.h>
using namespace std;

void printPattern(int row, int col);

int main(){
    printPattern(5, 0);
    return 0;
};

void printPattern(int row, int col){
    if(row == 0) return;

    if(col < row){
        cout << "*";
        printPattern(row, ++col);
    }else{
        cout << endl;
        printPattern(--row, 0);
    }
};
