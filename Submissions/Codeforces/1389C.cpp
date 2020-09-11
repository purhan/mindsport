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

int freq(string &s, int i, int j) {
    int k = 0;
    for (char&c : s) {
        if (c - '0' == i) {
            k++;
            swap(i, j);
        }
    }
    if (i != j && k & 1) {
        k--;
    }
    return k;
}

void solve() {
    string s; cin >> s;
    int ans = 0;
    fo(int, i, 0, 10) {
        fo(int, j, 0, 10) {
            ans = max(ans, freq(s, i, j));
        }
    }
    ans = s.length() - ans;
    cout << ans << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}