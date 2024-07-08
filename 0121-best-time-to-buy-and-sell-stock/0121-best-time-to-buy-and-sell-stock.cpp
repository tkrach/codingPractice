class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // I'm thinking 2 pointer and we just maximize the difference between the 2 to 
        // maximize the profits. 
        int minPrice = INT_MAX;  
        int maxProfit = 0;       
        
        for (int i = 0; i < prices.size(); i++) {
            // Update minPrice if current price is lower
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
            int profit = prices[i] - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit; 
            }
        }
        
        return maxProfit;
    }
};