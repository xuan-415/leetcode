#include<iostream>
#include<string>
using namespace std;
int main(){
    class Solution {
        public:
            int reverse(int x) {
                long int a;
                string y,z;
                y = to_string(x);
                for(int i = y.size()- 1; i >= 0; i--){
                    z.push_back(y[i]);
                }
                a = stoll(z);
                if(x < 0 ){
                    a = a * -1;       
                }
                if(a >2147483647 || a < -2147483648  )
                    return 0;
                else 
                    return a;
            }
        };  

    
}