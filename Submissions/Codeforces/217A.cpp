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

bool visited[500];
int n;
int x[500];
int y[500];
void dfs(int v) {
    if (visited[v]) return;
    visited[v] = true;
    for (int i = 0; i < n; ++i) {
        if (x[i] == x[v] || y[i] == y[v])
            dfs(i);
    }
}

void solve() {
    cin >> n;
    fo(int, i, 0, n) {
        cin >> x[i] >> y[i];
    }
    int ans = 0;
    fo(int, i, 0, n) {
        if (!visited[i]) {
            dfs(i);
            ans += 1;
        }
    }
    cout << ans - 1 << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}