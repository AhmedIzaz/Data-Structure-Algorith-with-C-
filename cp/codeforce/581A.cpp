#include <bits/stdc++.h>
using namespace std;

int main(){
    int redS, blueS, sockD, remD;
    cin >> redS;
    cin >> blueS;
    if(redS > blueS) sockD = blueS;
    else sockD = redS;
    remD = abs((redS-blueS))/2;
    cout << sockD << " " << remD << endl;
    return 0;
};
