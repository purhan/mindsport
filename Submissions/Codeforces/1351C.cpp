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
#define pr_pr pair<int, int>, pair<int, int>

void solve() {
    string s; cin >> s;
    int x = 0, y = 0, ans = 0;
    set<pair<pr_pr>> pr;
    for (char& c : s) {
        pair<int, int> p1 = {x, y};
        if (c == 'N') y++;
        if (c == 'S') y--;
        if (c == 'E') x++;
        if (c == 'W') x--;
        pair<int, int> p2 = {x, y};
        if (p1.first > x) swap(p1, p2);
        else if (p1.first == x && p1.second > y) swap(p1, p2);
        pair<pr_pr> newpair = make_pair(p1, p2);
        if (pr.find(newpair) == pr.end()) ans += 5; else ans += 1;
        pr.insert(newpair);
    }
    cout << ans << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}