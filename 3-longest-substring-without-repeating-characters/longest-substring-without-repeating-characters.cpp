class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        set<char> val;
        int maxLen=0;
        int left=0;
        for(int i=0;i<s.length();i++){
            if(val.count(s[i])==0){
                val.insert(s[i]);
               maxLen=max(maxLen,i-left+1);
            }
            else{
                 while (val.count(s[i])==1){
                    val.erase(s[left]);
                    left++;
            }
              val.insert(s[i]);
            }
           
        }
        return maxLen;
        
    }
};