#include <bits/stdc++.h>
using namespace std;

int getStringValue(string str);

int main(){
    vector<string> inputStrings;
    int length = 0;
    int userStrValue = 0;
    for(int i = 0; i < 2; i++){
        string str;
        getline(cin, str);
        inputStrings.push_back(str);
        length += str.length();
        int strValue = getStringValue(str);
        userStrValue+=strValue;
    };

    string fuzzleStrl;
    getline(cin, fuzzleStrl);
    int puzzleStrValue = getStringValue(fuzzleStrl);

    if((length != fuzzleStrl.size()) || (puzzleStrValue != userStrValue)) {
        cout << "NO";
    }else{
        cout << "YES";
    };


    return 0;
}


int getStringValue(string str){
        int value = 0;
        for (int i = 0; i < str.size(); i++){
            char ch = (int)str[i];
            value+=ch;
        };

        return value;
}
