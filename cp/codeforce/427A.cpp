#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, in, totalCrime = 0, adjusted = 0;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n ; i++){
        cin >> in;
        if((in < 0 && adjusted > 0)||(in > 0)){
            adjusted += in;
        }else{
            totalCrime += abs(in);
        };
    };
    cout << totalCrime;
    return 0;
};
