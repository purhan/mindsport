// https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/

class Solution{
public:
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    vector<ull> dp(n + 1);
	    dp[0] = 1;
	    ull ans = 1, p2 = 0, p3 = 0, p5 = 0;

        for(int i = 1; i <= n; ++i) {
            ull nextp = min({dp[p2] * 2, dp[p3] * 3, dp[p5] * 5});
            if(nextp == dp[p2] * 2) {
                dp[i] = dp[p2] * 2;
                p2++;
            }
            if(nextp == dp[p3] * 3) {
                dp[i] = dp[p3] * 3;
                p3++;
            }
            if(nextp == dp[p5] * 5) {
                dp[i] = dp[p5] * 5;
                p5++;
            }
        }

	    return dp[n - 1];
	}
};

