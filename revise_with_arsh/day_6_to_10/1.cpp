// https://practice.geeksforgeeks.org/problems/maximum-profit4657/1

class Solution {
  public:
    int maxProfit(int k, int n, int prices[]) {
        if(n == 0) return 0;
        vector<vector<int>> dp(k + 1, vector<int>(n + 1, 0));

        for(int t = 1; t <= k; ++t) {
            for(int d = 1; d < n; ++d) {
                dp[t][d] = max(dp[t][d], dp[t][d - 1]);

                for(int i = 0; i < d; ++i) {
                    dp[t][d] = max(dp[t][d], prices[d] - prices[i] + dp[t - 1][i]);
                }
            }
        }

        return dp[k][n - 1];
    }
};
