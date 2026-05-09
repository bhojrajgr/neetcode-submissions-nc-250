class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = INT_MAX;   // start with a very large number
        int profit = 0;

      for (int i = 0; i < n; i++) {
        buy = min(buy, prices[i]);              // update lowest price seen so far
        profit = max(profit, prices[i] - buy);  // check profit if sold today
     }
        return profit;
    }
};
