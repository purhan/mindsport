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
    int n; cin >> n;
    vector<int> a(n, 0);
    vector<int> hash(n, 0);
    fo(int, i, 0, n) {
        cin >> a[i];
    }
    sortall(a);
    fo(int, i, 1, n) {
        if ((a[i] - a[i - 1]) <= 1) hash[i - 1] = -1;
    }
    int cnt = 0;
    fo(int, i, 0, n) {
        if (hash[i] == 0) cnt++;
    }
    if (cnt == 1) {
        cout << "YES" << enl;
    } else {
        cout << "NO" << enl;
    }

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}