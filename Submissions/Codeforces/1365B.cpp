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
    int n; cin >> n;
    bool zer = false, one = false, sorted = true;
    int a[n], b[n];
    fo(int, i, 0, n) {
        cin >> a[i];
        if (i >= 1 && a[i] < a[i - 1]) sorted = false;
    }
    fo(int, i, 0, n) {
        cin >> b[i];
        if (b[i] == 1) one = true;
        if (b[i] == 0) zer = true;
    }

    if (zer == true && one == true) cout << "Yes";
    else if (sorted) cout << "Yes";
    else cout << "No";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i) {
        solve();
        cout << enl;
    }
    return 0;
}