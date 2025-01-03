class Solution {
public:
    int maxScore(string s) {
        int max=INT_MIN;
        int zero=0;
        int one=count(s.begin(),s.end(),'1');
        for (int i=0;i<s.length()-1;i++){
            if(s[i]=='0') zero++;
            if(s[i]=='1') one--; 
            if ( (zero + one ) > max) max = zero+one;            
        }
        return max;
    }
};