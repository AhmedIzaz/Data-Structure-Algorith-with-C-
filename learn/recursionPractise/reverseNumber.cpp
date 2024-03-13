#include <bits/stdc++.h>
using namespace std;

long long reverseNumber(long long n, long long sum = 0){
        if(n <= 0) {
            return sum;
        };
        return reverseNumber(n/10, ((sum * 10) + (n%10)));
};
int main(){


    cout << reverseNumber(45) << endl;

    return 0;
};
