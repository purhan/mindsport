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
    ld n, k; string s;
    cin >> n >> k >> s;
    int res = 0;

    for (int i = 0; i < n;) {
        int j;
        for (j = i + 1; j < n && s[j] != '1'; j++);

        int left = s[i] == '1' ? k : 0;
        int right = j < n && s[j] == '1' ? k : 0;
        int len = j - i;

        if (left == k) {
            len--;
        }

        len -= left + right;

        if (len > 0) {
            res += (len + k) / (k + 1);
        }

        i = j;
    }
    cout << res << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}