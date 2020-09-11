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
    int n, m; cin >> n >> m;
    int a[n][m];
    fo(int, i, 0, n) {
        fo(int, j, 0, m) {
            cin >> a[i][j];
        }
    }

    int t = n;
    while (!(t & 1)) {
        bool FLAG = true;
        int i = 0;
        while (i < t / 2) {
            fo(int, j, 0, m) {
                if (a[i][j] != a[t - i - 1][j]) {
                    FLAG = false;
                    break;
                }
            }
            i++;
        }
        if (FLAG) {
            t /= 2;
        } else break;
    }
    return void(cout << t << enl);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}