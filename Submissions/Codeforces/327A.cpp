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

int kadane(int N, int arr[]) {
    for (int i = 0; i < N; i++) cin >> arr[i];
    int cur = 0, ans = 0;

    cur = ans = arr[0];
    for (int i = 1; i < N; i++) {
        cur = max(0, cur);
        cur += arr[i];
        ans = max(ans, cur);
    }
    return ans;
}

void solve() {
    int n; cin >> n;
    int a[n], b[n];
    fo(int, i, 0, n) {
        cin >> a[i];
        if (a[i] == 1) {
            b[i] = -1;
        } else b[i] = 1;
    }
    if (n == 1) {
        cout << 1 - a[0];
        return;
    }

    cout << min(kadane(n, b) + 2, n);

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}