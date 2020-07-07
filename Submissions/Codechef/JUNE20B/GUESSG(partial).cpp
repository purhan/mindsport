#include <iostream>
#include <bits/stdc++.h>
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
    int64_t n; cin >> n;
    int64_t ans; char temp;
    int64_t hi = n, lo = 1; ans = lo + (hi - lo) / 2;
    cout << ans << endl;
    // int64_t arr[4];
    // fo(i, 0, 4) {
    //  cout << ans << endl;
    //  cin >> arr[i];
    // }
    // if(arr[0] == arr[])

    while (true) {
        cin >> temp;

        if (temp == 'G') {
            cout << ans << endl; cin >> temp;
            if (temp == 'G') {
                lo = ans;
                ans = lo + (hi - lo) / 2;
                cout << ans << endl;
                continue;
            }
        }

        if (temp == 'L') {
            cout << ans << endl; cin >> temp;
            if (temp == 'L') {
                hi = ans;
                ans = lo + (hi - lo) / 2;
                cout << ans << endl;
                continue;
            }
        }

        if (temp == 'E') {
            break;
        }

        cout << ans << endl;
    }

    return 0;
}