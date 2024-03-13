#include <bits/stdc++.h>
using namespace std;

long long sumOfDigits(long long n){
    if(n <= 0) return 0;
    return (n%10) + sumOfDigits(n/10);
}


int main(){
    cout << sumOfDigits(203830134534) << endl;
    return 0;
};

