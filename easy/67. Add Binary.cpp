#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
    
        if (a.length() < b.length()) swap(a, b);
        string c_in = "0";
        string ans = "";
        int num = a.length() - b.length();
        int j = b.length() - 1;
        for (int i = a.length() - 1; i >= 0; i--) {
            if (j != -1) {
                if (a[i] == '1' && b[j] == '1' && c_in == "1") {
                    ans.insert(0, "1"); c_in = "1"; 
                }
                else if ((a[i] == '1' && b[j] == '0' && c_in == "1") || (a[i] == '0' && b[j] == '1' && c_in == "1") || (a[i] == '1' && b[j] == '1' && c_in == "0")) {
                    ans.insert(0, "0"); c_in = "1";
                }
                else if ((a[i] == '0' && b[j] == '0' && c_in == "1") || (a[i] == '0' && b[j] == '1' && c_in == "0") || (a[i] == '1' && b[j] == '0' && c_in == "0")) {
                    ans.insert(0, "1"); c_in = "0"; 
                }
                else if (a[i] == '0' && b[j] == '0' && c_in == "0") {
                    ans.insert(0, "0"); c_in = "0"; 
                }
                j--;
            }
            else {
                if (a[i] == '1' && c_in == "1") {
                    ans.insert(0, "0"); c_in = "1";
                }
                else if ((a[i] == '0' && c_in == "1") || (a[i] == '1' && c_in == "0")) {
                    ans.insert(0, "1"); c_in = "0";
                }
                else if (a[i] == '0' && c_in == "0") {
                    ans.insert(0, "0"); c_in = "0";
                }
            }
        }
        if (c_in == "1") ans.insert(0, "1");
        return ans;
    }
};