class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit;
        int price;
        int min_price = prices[0];
        int max_profit = 0;
        int i = 0;

        for (i = 0; i < prices.size(); i++) {
            min_price = min(min_price, prices[i]);
            profit = prices[i] - min_price;
            max_profit = max(profit, max_profit);
        }

        return max_profit;


    }
};
