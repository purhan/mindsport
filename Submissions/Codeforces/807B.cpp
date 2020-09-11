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

bool check(int x, int p) {
    int temp = (x / 50) % 475;
    fo(int, i, 0, 25) {
        temp = (temp * 96 + 42) % 475;
        if (temp + 26 == p) return true;
    }
    return false;
}

void solve() {
    lli p, x, y; cin >> p >> x >> y;

    for (int s = y; ; s++) {
        if (s % 50 != x % 50) continue;
        bool ok = check(s, p);

        if (ok) {cout << (max((lli)0, s - x) + 50) / 100 << enl; break;}
    }

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}