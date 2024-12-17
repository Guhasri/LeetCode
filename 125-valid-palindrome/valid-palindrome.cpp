#include <cstring>
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
         string ans = "";
         string rev="";
        for (auto ch : s) {
            if (isalnum(ch)){
                ans += ch;
                rev+=ch;
            }
         }
         
         reverse(ans.begin(),ans.end());
         if(ans==rev) return true;
        return false;

    }
};