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
    lli n, k, ans = 0; cin >> n >> k;
    vector<lli> a(n), w(k);
    vector<vector<lli>> v(n);
    for (auto &it : a) cin >> it;
    for (auto &it : w) cin >> it;
    sortall(a);
    sortall(w);
    for (int i = 0; i < k / 2; i++)swap(w[i], w[k - i - 1]);
    int pos = 0;
    for (int i = 0; i < n - k; i++) {
        while (w[pos] == v[pos].size() + 1)pos++;
        v[pos].push_back(a[i]);
    }
    int qf = 1;
    for (int i = 0; i < k; i++) {
        ans += a[n - i - 1];
        if (v[i].size())ans += v[i][0];
        else ans += a[n - qf], qf++;
    }

    cout << ans << enl;

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}