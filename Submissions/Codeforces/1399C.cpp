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
    int n, ans = 0; cin >> n;
    vector<int> a(n);
    for (auto &it : a) cin >> it;
    sortall(a);

    for (int i = 0; i <= n + n; ++i) {
        int l = 0, r = n - 1, curr = 0;
        while (l < r) {
            if (a[l] + a[r] == i) {
                curr++;
                l++; r--;
            } else if (a[l] + a[r] < i) l++;
            else r--;
        }
        ans = max(ans, curr);
    }

    cout << ans << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}