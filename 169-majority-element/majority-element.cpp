class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(mp.find(nums[i]) == mp.end())mp[nums[i]]=1;
            if(mp[nums[i]]<=(n/2)) mp[nums[i]]++;
            else return nums[i];
        }
        return 0;
    }
};