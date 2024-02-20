#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t, n, temp, v=0;
    long double tD;
    cin >> t;
    cin.ignore();

    while(t > 0){
        cin >> n;
        cin.ignore();
        for(int i = 0; i < n; i++){
            cin >> temp;
            v += temp;
        };
        tD = static_cast<double>(sqrt(v));
        temp = sqrt(v);
        if(tD == temp){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        };
        tD = 0;
        temp = 0;
        v = 0;
        n = 0;
        t--;
    };
    return 0;
};
