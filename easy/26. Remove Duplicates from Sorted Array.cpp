#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) { 
        if (nums.empty())
            return 0;
        
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1]) {
                nums.erase(nums.begin() + i);
                i -= 1;
            }
        }
        return nums.size(); 
    }
};