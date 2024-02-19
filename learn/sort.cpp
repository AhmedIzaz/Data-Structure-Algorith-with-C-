#include <bits/stdc++.h>
using namespace std;
string reverseString(string str, string output, int index);
int main(){
    string theStr = "asif";
    string output = "";
    cout << reverseString(theStr, output, (theStr.size()-1));
    return 0;
};

// checking is given array is sorted in ascending order or not
string reverseString(string str, string output, int index){
        if(index < 0) return output;
        output = output + str[index];
        return reverseString(str, output, index-1);
};
