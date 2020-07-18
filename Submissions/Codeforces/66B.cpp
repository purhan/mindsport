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
#define dbg(x)                  cout << #x << " " << x << enl;
// #define PI 3.1415926535897932384626
// const int MOD = 1000000007; const lli INF = 1e18; const int MX = 100001;

void solve() {
    int n; cin >> n;
    vector<int> values(n);
    for (auto &v : values) cin >> v;

    int ans = 0;
    for (int i = 0; i < n; i++) {

        int left = i - 1, right = i + 1;

        while (left >= 0 && values[left] <= values[left + 1]) left--;
        while (right < n && values[right] <= values[right - 1]) right++;

        ans = max(ans, (i - left - 1) + (right - i - 1) + 1);
    }

    cout << ans << endl;

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}