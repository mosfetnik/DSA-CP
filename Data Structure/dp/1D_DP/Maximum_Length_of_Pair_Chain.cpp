class Solution {
    public:
        int findLongestChain(vector<vector<int>>& pairs) {
    // * bottom up approach
            int n = pairs.size();
            vector<int> dp(n, 1);
            int maxL = 1;
            sort(pairs.begin(), pairs.end());
    
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < i; j++) {
    
                    if (pairs[i][0] > pairs[j][1]) {
    
                        dp[i] = max(dp[i], dp[j] + 1);
                        maxL = max(dp[i], maxL);
                    }
                }
            }
            return maxL;
        }
    };