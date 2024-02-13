#include <bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    bool toggler = true;
    cin >> row;
    cin >> col;
    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j++){
            if((i % 2 != 0)) {
                    cout << "#";
            } else if (i % 2 == 0 && ((j == 1 && !toggler) || (j == col && toggler) )){
                cout << "#";
            }else cout << ".";
        };
        if(i % 2 == 0) toggler = !toggler;
        cout << endl;
    };
    return 0;
};
