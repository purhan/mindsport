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
    lli n, k; cin >> n >> k;
    lli b1 = 0, b2 = 0;
    string ans = "";
    for (int i = 1 ; i < n ; i ++) {
        b1 += i;
        if (b1 >= k) {
            b2 = i + k  - b1 - 1;
            b1 = i;
            break;
        }
    }
    for (int i = 0 ; i < n - b1 - 1; i++) {
        ans += 'a';
    }
    ans += 'b';
    for (int i = 0 ; i < b1 - b2 - 1 ; i++) {
        ans += 'a';
    }
    ans += 'b';
    for (int i = 0 ; i < b2 ; i++) {
        ans += 'a';
    }
    cout << ans << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}