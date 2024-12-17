class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>  s1;
        stack<char> s2;
        int i=0;
        int j=0;
        while(i<s.length() || j<t.length()){
            if(i<s.length()  && s[i]=='#') {
                if(!s1.empty()) s1.pop();
                i++;
            }
            else{
                if(i<s.length()){
                 s1.push(s[i]);
                 i++;
                }
            }
            if(j<t.length()  && t[j]=='#'){
                 if(!s2.empty()) s2.pop();
                 j++;
            }
            else{
                if(j<t.length()){
                 s2.push(t[j]);
                 j++;
                }
            }
        }
        string a=""; string b="";
        while(!s1.empty()){ a+=s1.top();s1.pop();}
        while(!s2.empty()){ b+=s2.top();s2.pop();}
        
        if(a==b) return true;
        return false;
    }
};