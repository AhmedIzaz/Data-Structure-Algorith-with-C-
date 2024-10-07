#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {1, 2, 3, 4};
    // by doing this we can shortcutly find permutation's
    do{
        for(int i = 0; i < nums.size(); i++){
            cout << nums[i] << " ";
        };
        cout << "\n";
    }while(next_permutation(nums.begin(), nums.end()));

    return 0;
};
