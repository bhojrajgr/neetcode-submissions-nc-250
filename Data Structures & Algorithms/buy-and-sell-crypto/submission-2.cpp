// Sliding Window 

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0; 
        int right = 1;
        int maxProfit = 0;

        while(right < prices.size()) {
          if(prices[right] > prices[left]) {
            // profitable transaction
            maxProfit = max(maxProfit, prices[right] - prices[left]);
          } else {
               // shift by day to right (new min)
               left = right;
          }
          right++;
        }
        return maxProfit;
    }
};
