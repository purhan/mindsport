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

void solve() {
    int n; cin >> n;
    vector<lli> a(n, 0);
    vector<lli> b(n, 0);
    lli miinA = LONG_LONG_MAX, miinB = LONG_LONG_MAX;
    fo(int, i, 0, n) {
        cin >> a[i];
        miinA = min(miinA, a[i]);
    }
    fo(int, i, 0, n) {
        cin >> b[i];
        miinB = min(miinB, b[i]);
    }
    lli ans = 0;
    fo(int, i, 0, n) {
        ans += (a[i] - miinA);
        ans += (b[i] - miinB);
        ans -= min((a[i] - miinA), (b[i] - miinB));
        // if (a[i] > miinA && b[i] > miinB) ans -= 1;
    }
    cout << ans << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}