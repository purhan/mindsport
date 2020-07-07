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
    lli n; cin >> n;
    lli p[n];
    vector<int> ans;
    fo(lli, i, 0, n) {
        cin >> p[i];
    }
    ans.push_back(p[0]);
    fo(lli, i, 1, n - 1) {
        if (p[i] > p[i + 1] && p[i] > p[i - 1])
            ans.push_back(p[i]);
        if (p[i] < p[i + 1] && p[i] < p[i - 1])
            ans.push_back(p[i]);
    }
    ans.push_back(p[n - 1]);

    cout << ans.size() << enl;
    for (auto i : ans) {
        cout << i << " ";
    }
    cout << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}