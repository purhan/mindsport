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
    string s; cin >> s;
    vector<int> pos[26];
    fo(int, i, 0, n) {
        pos[s[i] - 'a'].push_back(i);
    }
    int m; cin >> m;
    fo(int, j, 0, m) {
        string t; cin >> t;
        int cnt[26] = {0};
        fo(int, i, 0, (int)t.size()) cnt[t[i] - 'a']++;

        int ans = 0;
        fo(int, i, 0, 26) {
            if (cnt[i] > 0) ans = max(ans, pos[i][cnt[i] - 1]);
        }
        cout << ans + 1 << enl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}