#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        while(1){
            if(i == 0 && digits[0] == 9){
               digits[i] = 1;
               digits.push_back(0);
               break;
            }
            else if(digits[i] == 9){
               digits[i] = 0;
               i--;
            }
            else{ 
               digits[i] += 1;
               break;
           }
           if(i == 0 && digits[0] == 9){
                digits[i] = 1;
                digits.push_back(0);
                break;
            }
            else if(i == 0 && digits[0] != 9){
                digits[0] += 1;
                break;
            }
      }
      return digits;
      
    }
};