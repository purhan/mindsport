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
// const int MOD = 1000000007; const int INF = 1e18; const int MX = 100001;
//==================================================================================

void solve() {
    uint64_t n; cin >> n;
    uint64_t a[n];
    int hash[1000001];
    memset(hash, 0, sizeof(hash));
    uint64_t mxx = 0;
    for (uint64_t i = 0; i < n; ++i) {
        cin >> a[i];
        hash[a[i]]++;
        mxx = max(mxx, a[i]);
    }

    if (hash[mxx] > 1) {
        cout << "NO\n";
        return;
    }

    for (auto i : hash) {
        if (i > 2) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
    vector<uint64_t> ans1;
    vector<uint64_t> ans2;
    for (uint64_t i = 0; i < mxx + 1; ++i) {
        if (hash[i] == 0) continue;
        if (hash[i] == 2) {
            ans1.push_back(i);
            ans2.push_back(i);
        } else {
            ans1.push_back(i);
        }
    }

    sort(ans1.begin(), ans1.end());
    sort(ans2.begin(), ans2.end(), greater<uint64_t>());

    for (auto i : ans1) {
        cout << i << " ";
    }
    for (auto i : ans2) {
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