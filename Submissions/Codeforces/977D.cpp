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

lli deg3 (lli x) {
    lli res = 0;
    while (x % 3 == 0) {
        x /= 3;
        res++;
    }
    return res;
}

void solve() {
    lli n; cin >> n;
    vector<pair<int, lli>> v(n);
    fo(int, i, 0, n) {
        cin >> v[i].second;
        v[i].first = -deg3(v[i].second);
    }
    sortall(v);
    fo(int, i, 0, n) {
        cout << v[i].second << " \n"[i + 1 == n];
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}