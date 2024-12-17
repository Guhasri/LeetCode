class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        if(find(nums.begin(),nums.end(),target) == nums.end()) return {-1,-1};
        else {
            
            auto it=find(nums.begin(),nums.end(),target);
            int index=distance(nums.begin(), it);
            cout<<index;
            ans[0]=index;
            while(index<nums.size() && nums[index]==target){
                ans[1]=index;
                 index++;
            }
        }
        return ans;
    }
};