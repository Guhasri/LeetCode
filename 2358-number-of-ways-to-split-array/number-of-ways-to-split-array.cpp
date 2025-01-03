class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum=0;
        int n=nums.size();
        vector<long long> prefixsum(n);
        for(int i =0;i<n;i++){
            sum+=nums[i];
            prefixsum[i]=sum;
            cout<<prefixsum[i]<<endl;
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(prefixsum[i]>=(prefixsum[n-1]-prefixsum[i])) {
                ans++;
                //cout<<prefixsum[n-1];
            }
        }
        return ans;        
    }
};