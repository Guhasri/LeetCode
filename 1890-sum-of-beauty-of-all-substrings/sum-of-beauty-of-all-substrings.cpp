class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        for ( int i=0;i<s.length();i++){
            map<char,int>my_map;
            for(int j=i;j<s.length();j++){
                my_map[s[j]]++;
                int least=INT_MAX;
                int most=INT_MIN;
                for(auto it : my_map){
                    least=min(least,it.second);
                    most=max(most,it.second);
                }
                ans+=(most-least);

            }
        }
        return ans;
        
    }
};