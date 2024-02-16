#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, minute, solved = 0, timeRemains = 240;
    cin >> n;
    cin >> minute;
    timeRemains -= minute;
    for(int i = 1; ((i <= n) && (timeRemains > 0)); i++){
        timeRemains -= (5*i);
        if(timeRemains >= 0) solved++;
    };
    cout << solved << endl;
    return 0;
};
