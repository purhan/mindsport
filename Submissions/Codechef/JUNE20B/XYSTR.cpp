#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define fo(i, a, b) for (int64_t i=a; i<(b); i++)
#define forev(i, b, a) for (int64_t i = (b)-1; i >= a; i--)
typedef long long       ll;
typedef long double     ld;
typedef complex<ld>     cd;
typedef pair<int64_t, int64_t>  pi;
typedef pair<ll, ll>    pl;
typedef pair<ld, ld>    pd;
typedef vector<int64_t>     vi;
typedef vector<ld>      vd;
typedef vector<ll>      vl;
typedef vector<pi>      vpi;
typedef vector<pl>      vpl;
typedef vector<cd>      vcd;
#define mp              make_pair
#define pb              push_back
#define ff              first
#define ss              second
#define lb              lower_bound
#define ub              upper_bound
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define endl            "\n"
#define fast            ios_base::sync_with_stdio(0); cin.tie(0);
// #define PI 3.1415926535897932384626
// const int64_t MOD = 1000000007;
// const ll INF = 1e18;
// const int64_t MX = 100001;
//==================================================================================

int main() {
    // freopen("input.txt", "r", stdin);
    fast;
    int64_t t; cin >> t; while (t--) {
        string s; cin >> s;
        int64_t n = s.length();
        int ans = 0;

        fo(i, 0, n - 1) {
            if (s[i] != s[i + 1]) {
                ans++;
                i++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}