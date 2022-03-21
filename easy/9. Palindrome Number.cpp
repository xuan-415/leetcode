class Solution {
public:
    bool isPalindrome(int x) {
        string s,r;
        int j;
        s = to_string(x);
        for(int i = s.size() - 1; i >= 0; i--){
            r.push_back(s[i]);
        }
        j = stoll(r);
        if(j == x) return true;
        else return false;
    }
};