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
#define dbg(x)                  cout << #x << ": " << x << enl;
// #define PI 3.1415926535897932384626
// const int MOD = 1000000007; const lli INF = 1e18; const int MX = 100001;

const int N = 2e5 + 10;
int f[N], used[N];
vector<int> give, receive;

void solve() {
    int n; cin >> n;
    fo(int, i, 1, n + 1)  {cin >> f[i]; used[f[i]] = 1; if (f[i] == 0) give.push_back(i);}
    fo(int, i, 1, n + 1) {
        if (!used[i]) receive.push_back(i);
    }
    fo(int, i, 0, (int)give.size()) {
        if (give[i] == receive[i]) {
            if (i == 0) swap(give[i], give[i + 1]);
            else swap(give[i], give[i - 1]);
        }
    }
    fo(int, i, 0, (int)give.size()) {
        f[give[i]] = receive[i];
    }
    fo(int, i, 1, n + 1) {
        cout << f[i] << " \n"[i == n];
    }
}

int main() {
    // ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}