//upper_bound ....... upper-a.begin()
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
    lli n; cin >> n;
    lli sum = 0;
    vector<lli> a(n + 10, 0);
    fo(lli, i, 0, n) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum & 1) {
        cout << "NO" << enl;
        return;
    }

    map<lli, lli> first, second;

    first[a[0]] = 1;

    fo(lli, i, 1, n) second[a[i]]++;

    lli sdash = 0;

    fo(lli, i, 0, n) {
        sdash += a[i];
        if (sdash == sum / 2) {
            cout << "YES" << enl;
            return;
        }
        if (sdash < sum / 2) {
            lli x = (sum / 2) - sdash;
            if (second[x] > 0) {
                cout << "YES" << enl;
                return;
            }
        } else {
            lli x = sdash - (sum / 2);
            if (first[x] > 0) {
                cout << "YES" << enl;
                return;
            }
        }
        first[a[i + 1]] ++;
        second[a[i + 1]] --;
    }

    cout  << "NO" << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}