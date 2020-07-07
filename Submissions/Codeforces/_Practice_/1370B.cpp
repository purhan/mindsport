#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, b)     for (int i=a; i<(b); i++)
#define forev(i, b, a)  for (int i = (b)-1; i >= a; i--)
typedef long long int   lli;
typedef long double     ld;
#define all(x)          x.begin(), x.end()
#define sortall(x)      sort(all(x))
#define enl             "\n"
// #define PI 3.1415926535897932384626
// const int MOD = 1000000007; // const ll INF = 1e18; // const int MX = 100001;
//==================================================================================

void solve() {
    int n; cin >> n;
    vector<int> odd, even;
    int a[2 * n]; fo(i, 0, 2 * n) {
        cin >> a[i];
        if (a[i] % 2 == 0) even.push_back(i + 1);
        else odd.push_back(i + 1);
    }

    if (even.size() % 2 != 0) {
        even.pop_back();
        odd.pop_back();
    }

    vector< pair< int, int > > ans;
    for (int i = 0; i + 1 < (int)odd.size(); i += 2)
        ans.push_back({odd[i], odd[i + 1]});
    for (int i = 0; i + 1 < (int)even.size(); i += 2)
        ans.push_back({even[i], even[i + 1]});
    for (int i = 0; i < n - 1; i++)
        cout << ans[i].first << " " << ans[i].second << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t; while (t--)
        solve();
    return 0;
}