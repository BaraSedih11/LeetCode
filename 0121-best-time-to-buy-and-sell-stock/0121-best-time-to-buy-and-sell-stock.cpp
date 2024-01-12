class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPriceVal = prices[0];
        int maxProfit = 0;

        for(int i = 1 ; i < prices.size() ; i++){
            minPriceVal = min(minPriceVal, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPriceVal);
        }

        return maxProfit;
    }
};
