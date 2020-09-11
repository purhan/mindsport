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
const int MOD = 1000000007; // const lli INF = 1e18; const int MX = 100001;

void solve() {
    lli n; cin >> n;
    lli temp = 1;
    lli factorial = 1;
    fo(lli, i, 1, n) {
        temp *= 2;
        factorial *= i;
        temp %= MOD;
        factorial %= MOD;
    }
    factorial *= n;
    factorial %= MOD;
    factorial -= temp;
    if (factorial < 0) factorial += MOD;
    cout << factorial;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}