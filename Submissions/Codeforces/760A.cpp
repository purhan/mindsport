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
// const int MOD = 1000000007; // const ll INF = 1e18; // const int MX = 100001;
//==================================================================================

void solve() {
    int m, d; cin >> m >> d;
    int days = 0;
    if (m == 2) days = 28;
    else if (m <= 7) {
        if (m % 2 == 0) days = 30;
        else days = 31;
    } else {
        if (m % 2 == 0) days = 31;
        else days = 30;
    }

    cout << (d + days - 2) / 7 + 1;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}