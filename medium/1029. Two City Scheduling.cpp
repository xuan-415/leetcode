#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    class Solution {
        public:
            int twoCitySchedCost(vector<vector<int>>& costs) {
                vector<int> ans;
                int minest = 0;
                for(int i = 0; i < costs.size(); i++){
                    minest += costs[i][0];
                    ans.push_back(costs[i][0] - costs[i][1]);
                }   
                sort(ans.begin(), ans.end(), greater<int>());
                for(int i = 0; i < ans.size()/2; i++){
                    minest -= ans[i];
                }
                return minest;
            }
};
    system("pause");
}