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

int sumOfDigits(lli n) {
    lli res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}


void solve() {
    lli n, s, ans = 0; cin >> n >> s;
    lli digitsSum = sumOfDigits(n);
    if (digitsSum <= s) return void(cout << 0 << enl);
    lli temp = 1;
    fo(int, i, 0, 18) {
        int curr = (n / temp) % 10;
        lli diff = temp * ((10 - curr) % 10);
        n += diff;
        ans += diff;
        if (sumOfDigits(n) <= s) break;
        temp *= 10;
    }

    cout << ans << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}