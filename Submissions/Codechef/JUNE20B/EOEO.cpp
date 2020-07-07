#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, b) for (int i=a; i<(b); i++)
#define forev(i, b, a) for (int i = (b)-1; i >= a; i--)
typedef long long       ll;
typedef long double     ld;
typedef complex<ld>     cd;
typedef pair<int, int>  pi;
typedef pair<ll, ll>    pl;
typedef pair<ld, ld>    pd;
typedef vector<int>     vi;
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
// const int MOD = 1000000007;
// const ll INF = 1e18;
// const int MX = 100001;
//==================================================================================

int main() {
    // freopen("input.txt", "r", stdin);
    fast;
    int64_t t; cin >> t; while (t--) {
        int64_t ts; cin >> ts;
        int64_t ans = 0;
        if (ts % 2 == 1) {
            ans = (ts - 1) / 2;

        } else {

            int64_t count = 0;
            while (ts % 2 == 0) {
                ts /= 2;
                count++;
            }
            ans = (ts - 1) / 2;
            // ans *= count;
        }

        cout << ans << endl;
    }
    return 0;
}