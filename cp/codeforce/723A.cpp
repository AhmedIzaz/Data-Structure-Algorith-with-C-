#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, x2, x3, minD, maxD;

    cin >> x1;
    minD = x1, maxD = x1;

    cin >> x2;
    if(x2 > maxD) maxD = x2;
    if(x2 < minD) minD = x2;

    cin >> x3;
    if(x3 > maxD) maxD = x3;
    if(x3 < minD) minD = x3;

    cout << (maxD-minD) << endl;

    return 0;
};
