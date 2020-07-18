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
    int a[3]; cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);

    if (a[0] == a[1] && a[2] > a[1]) {
        cout << "NO" << enl;
        return;
    } else if (a[0] != a[1] && a[1] != a[2] && a[0] != a[2]) {
        cout << "NO" << enl;
        return;
    } else {
        cout << "YES" << enl;
        cout << a[0] << " " << a[1] << " " << 1 << enl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}