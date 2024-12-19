class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        if(arr.size()==1)return 1;
        int count=0;
        int maxi=arr[0];
        for(int i=0;i<arr.size();i++){             
            if(i==max(maxi,arr[i])) count++;
            else{
                while(i<arr.size() && max(maxi,arr[i])!=i) {
                    maxi=max(maxi,arr[i]);
                    i++;
                }
                count++;
            }
        }
        return count;
    }
};