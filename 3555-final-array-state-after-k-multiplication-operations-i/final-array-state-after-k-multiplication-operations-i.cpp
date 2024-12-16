class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {\
     
     for(int i=0;i<k;i++) {
        int minele=*min_element(nums.begin(),nums.end());
        cout<<minele<<endl;
        for(int j=0;j<nums.size();j++) {
            if(nums[j]==minele){ nums[j]*=multiplier;break;}
        }
        for(int num:nums)cout<<num;
        cout<<endl;
     }
     return nums;
    }
};