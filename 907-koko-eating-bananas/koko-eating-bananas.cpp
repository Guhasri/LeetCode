class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1;
        int j=*max_element(piles.begin(), piles.end()); 
        int mins=j;
        while(i<=j){
            int mid=i+(j-i)/2;
            long long sum=0;
            for(int x:piles){
                sum+=(x+mid-1)/mid;
            }
            if(sum<=h){
                mins=min(mins,mid);
                j=mid-1;
            }
            else {
                i=mid+1;
            }
        }
        return mins;
    }
};