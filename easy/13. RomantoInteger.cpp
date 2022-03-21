class Solution {
public:
    int romanToInt(string s) {
            map<char, int>::iterator iter;
            map<char, int>::iterator iter1;
            map<char, int> mymap = {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}
            };
            int count = 0;
            for(int i = 0; i < s.size(); i++){
                iter1 = mymap.find(s[i+1]);
                iter = mymap.find(s[i]);
                if(iter1->second > iter->second){
                    iter1->second -= iter->second;
                    count += iter1->second;
                    i+=1;
                }
                else count += iter->second;
            }
            return count;
    }
};