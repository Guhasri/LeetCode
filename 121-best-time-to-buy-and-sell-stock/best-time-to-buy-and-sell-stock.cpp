class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pricesSize=prices.size();
        int profit=0;
        int minPrice=prices[0];
        int currentProfit=0;
        int maxProfit=0;
        if(pricesSize<2)
        {
            return 0;
        }
        if (pricesSize==2)
        {
            if(prices[0]<prices[1])
            {
                return prices[1]-prices[0];
            }
            else return 0;
        }
        
        for(int i=1;i<pricesSize;i++ )
        {
            if(prices[i]<minPrice)
            {
                minPrice=prices[i];
                continue;
            }
            currentProfit=prices[i]-minPrice;
            if(currentProfit>maxProfit)
            {
                maxProfit=currentProfit;
            }    
                
        }
        return maxProfit;
            
        }
};