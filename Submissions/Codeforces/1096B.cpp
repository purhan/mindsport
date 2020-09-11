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
const int MOD = 998244353; //const lli INF = 1e18; const int MX = 100001;

void solve() {
    lli n; cin >> n;
    string s; cin >> s;

    lli l = 0, r = n - 1;

    while (s[l] == s[l + 1]) {
        l++;
    }
    while (s[r] == s[r - 1]) {
        r--;
    }

    l++;
    r = n - r;
    lli ans;

    if (s[0] != s[n - 1]) ans = (l + r + 1)  % MOD;
    else ans = ((l + 1) * (r + 1)) % MOD;
    // dbg(l);
    // dbg(r);
    cout << ans << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}