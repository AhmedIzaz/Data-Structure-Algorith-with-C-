#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    long long a, b, sum, min_val;
    cin >> testCase;
    cin.ignore();
    while(testCase > 0){
        cin >> a;
        cin >> b;
        cin.ignore();
        min_val = min(a, b);
        sum = (a+b)/4;
        if(min_val < sum){
            cout << min_val << endl;
        }else{
            cout << sum << endl;
        };
        testCase--;
    };
    sum = 0;
    min_val = 0;
    return 0;
};
