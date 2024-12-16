class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int min= *min_element(nums.begin(), nums.end()) ;   
        int max= *max_element(nums.begin(), nums.end());

        if(min!=0){
            return 0;
        }

        for ( int i=1;i<max;i++){
            auto it = find(nums.begin(), nums.end(), i);
            if(it == nums.end()){
                return i;
            }
        }
        return max+1;
    }
};