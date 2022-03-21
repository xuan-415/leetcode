#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        int num = 1, num1 = 2,count = 2,change = 1,change2 = 0;
        if(n == 1) return 1;
        else{
            n -= 2;
            while(n--){
                change2 = count;
                count += change;
                change = change2;
            }
        }
        return count;
    }
};