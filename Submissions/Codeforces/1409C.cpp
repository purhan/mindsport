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
    lli n, x, y, temp = 0; cin >> n >> x >> y;
    if (n == 2) {
        return void(cout << x << ' ' << y << enl);
    }
    lli diff = y - x;
    vector<lli> a;
    a.push_back(x);
    a.push_back(y);
    fo(lli, j, 1, diff + 1) {
        if (diff % j != 0) continue;
        if (diff / j + 1 > n) continue;
        temp = j;
        break;
    }
    lli w = n - 2ll;
    for (lli j = x + 1; j < y; j++) {
        if (w <= 0ll) break;
        if (!((j - x) % temp)) {
            w -= 1;
            a.push_back(j);
        }
    }
    while (w > 0 && (x - temp) > 0) {
        x -= temp;
        a.push_back(x);
        w--;
    }
    while (w > 0) {
        y += temp;
        w--;
        a.push_back(y);
    }
    for (auto& j : a)cout << j << ' ';
    cout << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}