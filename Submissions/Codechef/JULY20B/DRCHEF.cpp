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
// #define PI 3.1415926535897932384626
// const int MOD = 1000000007; const lli INF = 1e18; const int MX = 100001;

void solve() {
    lli n, x; cin >> n >> x;
    lli a[n];
    fo(lli, i, 0, n) {
        cin >> a[i];
    }
    lli ans = 0;
    sort(a, a + n);

    fo(lli, i, 0, n) {
        if (x >= a[i]) {
            ans += 1;
            x = max(x, 2 * a[i]);
            continue;
        }
        lli t = a[i];
        while (t > 0) {
            ans += 1;
            t = min(t, 2 * (t - x));
            x += x;
        }
        x = 2 * a[i];
    }

    cout << ans << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}