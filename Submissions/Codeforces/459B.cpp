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
// const int MOD = 1000000007;  const int MX = 100001;
const lli INF = 1e18;

void solve() {
    uns lli n; cin >> n;
    uns lli b[n];
    uns lli mxx = 0;
    uns lli miin = INF;

    fo(uns lli, i, 0, n) {
        cin >> b[i];
        mxx = max(b[i], mxx);
        miin = min(b[i], miin);
    }

    int t1 = 0, t2 = 0;
    for (auto i : b) {
        if (i == mxx) t1++;
        if (i == miin) t2++;
    }

    // uns lli ans = t1 * t2;
    cout << mxx - miin << " ";
    if (mxx == miin) cout << n * (n - 1) / 2;
    else cout << (lli)t1 * t2;
    return;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}