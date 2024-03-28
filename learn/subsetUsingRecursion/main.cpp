#include <bits/stdc++.h>
using namespace std;

void subSet(string resultStr, string inputStr, vector<string>& totalSubset);

int main()
{
    string inputStr;
    vector<string> totalSubset;
    getline(cin, inputStr);
    subSet("", inputStr, totalSubset);
    for(int i = 0; i < totalSubset.size(); i++){
        cout << totalSubset[i] << endl;
    }
    return 0;
}


void subSet(string resultStr, string inputStr, vector<string>& totalSubset){
    if(inputStr.size() == 0) {
        if(resultStr.size() > 0){
            totalSubset.push_back(resultStr);
        };
        return;
    }
    string modifiedInputStr = inputStr.substr(1, inputStr.size()-1);
    subSet(resultStr+inputStr[0], modifiedInputStr, totalSubset);
    subSet(resultStr, modifiedInputStr, totalSubset);
};
