class Solution {
public:
    int minSteps(string s, string t) {
        if(s.length()!=t.length())return 0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        

        if(s==t)return 0;

        map<char,int> mp;
        for(char ch:s){
            if(mp.find(ch)==mp.end()) mp[ch]=1;
            else mp[ch]++;
        }
        for(auto it:mp)cout<<it.first<<" "<<it.second<<endl;
        int sum=0;
        for(auto x:mp){
            int temp=count(t.begin(),t.end(),x.first);
            if(temp<x.second) sum+=(x.second-temp);
        }
        return sum;
        
    }
};