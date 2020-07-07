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
// const int MOD = 1000000007; // const int MX = 100001;
//==================================================================================

const lli INF = 1e18;

void solve() {
    lli n; cin >> n;
    lli a[n];
    lli miin = INF;
    for (lli i = 0; i < n; ++i) {
        cin >> a[i];
        miin = min(miin, a[i]);
    }

    if (miin == 0) {
        cout << "Still Rozdil" << enl;
        return;
    }

    int temp, cnt = 0;
    for (lli i = 0; i < n; ++i) {
        if (a[i] == miin) {
            temp = i;
            cnt++;
        }
    }

    if (cnt > 1) {
        cout << "Still Rozdil" << enl;
        return;
    }

    cout << temp + 1 << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}