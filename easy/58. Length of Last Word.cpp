#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
       while(s.back() == ' ') s.erase(s.begin() + s.length() - 1);
       return s.length()-s.find_last_of(' ')-1;   
    }
};