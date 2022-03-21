#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        int number = s.size();
        int i = 0;
        for (; i < number; ++i) {
        string x = "";
        if (s[i] == '(' && s[i + 1] == ')') {
            int num = i;
            for (i += 2; i < number; i++) {
                x += s[i];
            }
            s.replace(num,number, x);
            i = -1;
            number -= 2;
        }
        else if(s[i] == '[' && s[i+1] == ']'){
            int num = i;
            for(i += 2; i < number; i++){
                x +=s [i];
            }
            s.replace(num, number, x);
            i = -1;
            number -= 2;;
            }   
        else if(s[i] == '{' && s[i+1] == '}'){
            int num = i;
            for(i += 2; i < number; i++){
                x+=s[i];
            }
            s.replace(num, number, x);
            i = -1;
            number -= 2;
        } 
    }
        if(s == "") return true;
        else return false;
    }
};