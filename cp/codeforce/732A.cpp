#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, r, totalShobel = 1;
    cin >> k;
    cin >> r;

    while(true){
        if(((k*totalShobel) % 10 == 0)|| ((k*totalShobel) % 10 == r)){
          break;
        };
        totalShobel++;
    };
    cout << totalShobel << endl;
    return 0;
};
