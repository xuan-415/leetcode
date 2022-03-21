#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        string s;
        s = strs[0];
        for(int i = 0; i < strs.size(); i++){
            string x;
            for(int j = 0; j < strs[i].size(); j++){
                if(s[j] == strs[i][j]){
                    x += strs[i][j];
                }  
                else 
                    break;
            }
            s = x;
        }
        return s;
    }
};