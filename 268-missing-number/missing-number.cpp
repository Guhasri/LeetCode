class Solution {
public:
    int missingNumber(vector<int>& nums) {  
        int max= nums.size();
        int req_sum=(max*(max+1))/2;
        int sum=0;
        for ( int i=0;i<nums.size();i++){
           sum+=nums[i];
        }
        return (req_sum-sum);
    }
};