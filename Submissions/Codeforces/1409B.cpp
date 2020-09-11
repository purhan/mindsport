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

uns lli solve2(uns lli a, uns lli b, uns lli x, uns lli y, uns lli n) {
    if (b > y) {
        if (n < b - y) {
            b -= n;
            n = 0;
        } else {
            n -= b - y;
            b -= b - y;
        }
    }
    if (n > 0 && a > x) a -= min(n, a - x);
    uns lli ans = a * b;
    return ans;
}

void solve() {
    uns lli a, b, x, y, n; cin >> a >> b >> x >> y >> n;

    cout << min(solve2(a, b, x, y, n), solve2(b, a, y, x, n)) << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}