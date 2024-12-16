class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int temp=0;
        int prof=0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                if(prices[i]<prices[j]){
                    prof+=(prices[j]-prices[i]);
                }
                i++;
            }
        }
        return prof;
        
    }
};