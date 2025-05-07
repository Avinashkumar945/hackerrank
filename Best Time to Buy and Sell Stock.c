class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=INT_MIN;
        int maxprofit=0;
        int n=prices.size();
        int profit;
        for(int i=n-1;i>=0&&n!=1;i--){
            if(prices[i]>max && i!=0){
                max=prices[i];
            }
            profit=max-prices[i];
            if(profit>maxprofit){
                maxprofit=profit;
            }
        }
    
               if(maxprofit>0){
            return maxprofit;
        }
        return 0;
    }
};
