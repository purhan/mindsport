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

int solve2(char c, int l, int r, string &s) {
    int len = r - l + 1, cnt = 0;
    if (l == r) {
        if (s[l] != c) return 1;
        else return 0;
    }
    for (int i = l; i < l + (len / 2); ++i) {
        if (s[i] != c) cnt++;
    }
    int ans = cnt + solve2(c + 1, l + len / 2, r, s);
    cnt = 0;
    for (int i = l + len / 2; i <= r; i++) {
        if (s[i] != c) cnt++;
    }
    int temp = solve2(c + 1, l, l + len / 2 - 1, s);
    cnt += temp;
    ans = min(ans, cnt);
    return ans;
}

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    if (n == 1) {
        cout << (s[0] != 'a') << enl;
    } else {
        cout << solve2('a', 0, n - 1, s) << enl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}