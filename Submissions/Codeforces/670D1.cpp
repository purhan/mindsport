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
    int n, k; cin >> n >> k;
    vector<int> a(n), b(n);
    for (auto &it : a) cin >> it;
    for (auto &it : b) cin >> it;

    int ans = 0;
    while (true) {
        for (int i = 0; i < n; ++i) {
            b[i] -= a[i];
            if (b[i] < 0) {
                k += b[i];
                b[i] = 0;
            }
        }

        if (k < 0) return void(cout << ans << enl);
        ans++;
    }

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}