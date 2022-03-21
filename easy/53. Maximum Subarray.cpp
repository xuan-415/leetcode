#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int count = 0,maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            count += nums[i];
            maxi = max(maxi,count);
            if(count < 0) count = 0;
        }
        return maxi;
    }
};