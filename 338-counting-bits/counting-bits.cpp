#include<bitset>
class Solution {
public:
    vector<int> countBits(int n) {
    
    vector<int> x;
    
    for ( int i=0; i<= n ; i++ )
    {
        int count=0;
        string num = bitset<18>(i).to_string();
        for ( int j=0; j<num.length(); j++ )
        {
            if ( num[j]== '1' )
            {
                count++;
            }
        }
        x.push_back(count);

    }
    return x;
    }
};