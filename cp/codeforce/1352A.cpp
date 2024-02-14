#include <bits/stdc++.h>
using namespace std;

void showOutPut(string numStr);

int main(){
    int testcase;
    string inputStr;
    cin >> testcase;
    cin.ignore();
    while(testcase>0){
        getline(cin, inputStr);
        showOutPut(inputStr);
        testcase--;
    };
    return 0;
};

string makeNumOfZero(int length){
    string zeroStr = "";
    for(int i = 0; i < length; i++){
        zeroStr += '0';
    };
    return zeroStr;
};

void showOutPut(string numStr){
    int totalInt = 0, totalZeroEstimate;
    string sampleString = "";
    vector<string> roundStrList;
    for(int i = 0; i < numStr.size();i++){
        if(numStr[i] != '0') {
            totalInt++;
            totalZeroEstimate = numStr.size() - 1 - i;
            if(totalZeroEstimate > 0){
                sampleString += numStr[i];
                sampleString += makeNumOfZero(totalZeroEstimate);
                roundStrList.push_back(sampleString);
            }else{
                sampleString += numStr[i];
                roundStrList.push_back(sampleString);
            };
            sampleString = "";
        };

    };
    cout << totalInt << endl;
    for(auto s : roundStrList){
        cout << s << " ";
    };
    cout << endl;
};
