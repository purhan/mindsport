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
    string str; cin >> str;
    int x, n = (int)str.size(); cin >> x;
    string s(n, '1');

    for (int i = 0; i < n; ++i) {
        if (str[i] == '0') {
            if (i >= x) {
                s[i - x] = '0';
            }
            if (i < n - x) {
                s[i + x] = '0';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        bool one = false;
        one = one || (i - x >= 0 && s[i - x] == '1');
        one = one || (i + x < n && s[i + x] == '1');

        if (str[i] != one + '0') {
            cout << -1 << enl;
            return;
        }
    }
    cout << s << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}