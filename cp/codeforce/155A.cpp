#include <bits/stdc++.h>
using namespace std;

int main(){
    int testCase, minPer = 0, maxPer = 0, in, numPer = 0;
    cin >> testCase;
    cin.ignore();
    for(int i = 0; i < testCase; i++){
        cin >> in;
        if(i==0){
            minPer = in;
            maxPer = in;
            continue;
        }else if( (in < minPer) || (in > maxPer) ){
            if(in < minPer) minPer = in;
            else maxPer = in;
            numPer++;
        };
    };
    cout << numPer << endl;
    return 0;
};
