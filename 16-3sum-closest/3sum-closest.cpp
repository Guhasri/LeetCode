class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int ans=0;

        for ( int i = 0; i< nums.size();i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j=i+1;
            int k=nums.size() -1;
            while(j<k){
                int temp = nums[i] + nums[j] + nums[k];

                if ( temp < target ){
                    j++;
                    while(j<k && nums[j]==nums[j-1]) j++;
                }
                else if( temp > target ){
                    k--;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
                else{
                    return target;
                } 
                 if( diff > abs(target - temp )){
                    diff = abs(target - temp );
                    ans=temp;                    
                }

                
            }
        }
        return ans;
    }
};