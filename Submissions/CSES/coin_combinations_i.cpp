#include <bits/stdc++.h>
using namespace std;
#define fo(int, i, a, b)        for (int i=a; i<(b); i++)
#define forev(int, i, b, a)     for (int i = (b)-1; i >= a; i--)
#define uns                     unsigned
#define lli                     long long int
#define ld                      long double
#define all(x)                  x.begin(), x.end()
#define sortall(x)              sort(all(x))
#define enl                     "\n"
#define dbg(x)                  cout << #x << ": " << x << enl;
// #define PI 3.1415926535897932384626
const int MOD = 1000000007; //const lli INF = 1e18; const int MX = 100001;

//dp[x] = number of ways to make value x.

void solve() {
    int n, x; cin >> n >> x;
    vector<int> coins(n), dp(x + 1, 0);
    for (auto &i : coins) cin >> i;
    dp[0] = 1;
    for (int i = 1; i <= x; ++i) {
        for (auto c : coins) {
            if (i - c >= 0) {
                dp[i] += dp[i - c];
                if (dp[i] > MOD) dp[i] -= MOD;
            }
        }
    }
    cout << dp[x] << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}