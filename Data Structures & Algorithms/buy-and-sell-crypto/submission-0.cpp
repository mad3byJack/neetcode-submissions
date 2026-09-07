class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int max_sell = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (minprice > prices[i]) {
                minprice = prices[i];
            }
            if ((prices[i] - minprice) > max_sell) {
                max_sell = (prices[i] - minprice);
            }
        }
        return max_sell;
    }
};
