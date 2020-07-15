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
    int n; cin >> n;
    int w[n];
    int h1 = 0, h2 = 0;
    fo(int, i, 0, n) {
        cin >> w[i];
        if (w[i] == 100) h1++; else h2++;
    }

    if ((h1 + 2 * h2) % 2 != 0 || n == 1) {
        cout << "NO";
        return;
    }

    int g = (h1 + 2 * h2) / 2;

    while (h2 || g) {
        g -= 2;
        h2--;
    }

    while (g) {
        g--;
        h1--;
    }

    if (g == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}