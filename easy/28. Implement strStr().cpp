#include<vector>
#include<map>
#include<string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int count = 0;
        count = haystack.find(needle);
        if(count != -1){
            return count;
        }
        else return -1;
    }
};