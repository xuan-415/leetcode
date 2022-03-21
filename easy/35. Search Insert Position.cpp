#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int count = 0;
        bool check = false;;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target) {
                count = i;
                check = true;
            }
        }
        if(check == false){
            nums.push_back(target);
            sort(nums.begin(),nums.end());
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == target) count = i;
            }
        }
        return count;
    }
};