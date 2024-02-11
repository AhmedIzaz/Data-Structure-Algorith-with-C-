#include <bits/stdc++.h>
using namespace std;
string sliceTheString(string inputStr, int separator);
int main(){
    string totalStr = "";
    for(int i = 0; i < 2; i++){
        string str;
        getline(cin, str);
        totalStr += str;
    };

    string fuzzleStrl;
    getline(cin, fuzzleStrl);
    int i;
    for(i = 0; (i < totalStr.size()) && (fuzzleStrl.size() > 0); i++){
        int index = fuzzleStrl.find(totalStr[i]);
        if( index < fuzzleStrl.size() && index >= 0){
                fuzzleStrl = sliceTheString(fuzzleStrl, index);
        }else{
            break;
        };
    };

    if(i!=totalStr.size() || fuzzleStrl.size() != 0){
            cout << "NO" <<endl;
    }else{
            cout << "YES" << endl;
    };
    return 0;
}

string sliceTheString(string inputStr, int separator){
    string firstPart = inputStr.substr(0, separator);
    string secondPart = inputStr.substr(separator+1);
    return firstPart+secondPart;
};
