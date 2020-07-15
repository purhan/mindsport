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
// #define PI 3.1415926535897932384626
// const int MOD = 1000000007; const lli INF = 1e18; const int MX = 100001;

void solve() {
    lli n; cin >> n;
    lli a[n];
    lli fixed = 0;
    fo(lli, i, 0, n) {
        cin >> a[i];
        if (a[i] == i) fixed++;
    }
    if (fixed == n || fixed >= n - 2) {
        cout << n;
        return;
    }

    // cout << fixed << enl;
    for (int i = 0; i < n; ++i) {
        // cout << a[i] << " " << a[a[i]] << enl;
        if (a[a[i]] == i && a[i] != i) {
            fixed += 2;
            cout << fixed;
            return;
        }
    }

    cout << fixed + 1;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}