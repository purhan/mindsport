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
// const int MOD = 1000000007; const lli INF = 1e18; const int MX = 100001;

lli pow2[62];

void solve() {
    lli n, m; cin >> n >> m;
    lli ans = - (n * m);
    vector<map<int, int>> rcnt(n), ccnt(m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x; cin >> x;
            rcnt[i][x]++;
            ccnt[j][x]++;
        }
    }

    for (auto cnt : {rcnt, ccnt}) {
        int sz = cnt.size();
        for (int i = 0; i < sz; i++) {
            int b = cnt[i][0];
            int w = cnt[i][1];

            ans += (1LL << b) - 1;
            ans += (1LL << w) - 1;
        }
    }

    cout << ans << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    pow2[0] = 1;
    for (int i = 1; i < 62; i++)
        pow2[i] = 2 * pow2[i - 1];
    solve();
    return 0;
}