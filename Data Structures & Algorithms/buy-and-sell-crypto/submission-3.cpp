class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currmin = INT_MAX; 
        int max_profit = 0; 
        for(int i=0; i<prices.size(); i++){
            if(prices[i] < currmin){
                currmin = prices[i];
            }
            int profit = prices[i] - currmin; 
            if(profit > max_profit){
                max_profit = profit; 
            }
        }
        return max_profit; 
         
    }
};
