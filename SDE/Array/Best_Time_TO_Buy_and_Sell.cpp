 // O(n) 
 

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n = prices.size();
            int max_profit = 0;
            int min_val = INT_MAX;
    
            for (int i = 0; i < n; i++) {
                if (prices[i] < min_val) {
                    min_val = prices[i]; // finding the current minimum
                } else { // subtract the current value - global minimum
                    max_profit = max(max_profit, prices[i] - min_val);
                }
            }
            return max_profit;
        }
    };