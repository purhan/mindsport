#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, b)     for (int i=a; i<(b); i++)
#define forev(i, b, a)  for (int i = (b)-1; i >= a; i--)
typedef long long int   lli;
typedef long double     ld;
#define all(x)          x.begin(), x.end()
#define sortall(x)      sort(all(x))
#define enl             "\n"
// #define PI 3.1415926535897932384626
// const int MOD = 1000000007; // const ll INF = 1e18; // const int MX = 100001;
//==================================================================================

lli getR (lli a) {
    while (a % 2 == 0) a /= 2;
    return a;
}

lli a, b;

void solve() {
    cin >> a >> b;
    if (a > b) swap(a, b);
    lli ra = getR(a);
    lli rb = getR(b);

    if (ra != rb) {
        cout << -1 << enl;
        return;
    }

    lli ans = 0;
    b /= a;

    while (b >= 8) {
        b /= 8, ++ans;
    }
    if (b > 1) ++ans;

    cout << ans << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t; while (t--)
        solve();
    return 0;
}