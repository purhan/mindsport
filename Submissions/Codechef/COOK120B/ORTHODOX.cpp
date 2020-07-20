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
#define dbg(x)                  cout << #x << " " << x << enl;
// #define PI 3.1415926535897932384626
// const int MOD = 1000000007; const lli INF = 1e18; const int MX = 100001;

int solve2(lli a[], int n)
{
    lli i, temp = 0, j;
    unordered_map<lli, lli> m;

    for (i = 0; i < n; i++) {

        temp = 0;
        for (j = i; j < n; j++)  {

            temp = (temp | a[j]);

            m[temp] ++;
            if (m[temp] > 1) {
                return 0;
            }
        }
    }

    return 1;
}

void solve() {
    lli n; cin >> n;
    lli a[n];
    fo(lli, i, 0, n) {
        cin >> a[i];
    }

    int size = sizeof(a) / sizeof(a[0]);

    if (solve2(a, size) == 1) {
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