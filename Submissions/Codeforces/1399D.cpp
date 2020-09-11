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

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> pos0, pos1, ans(n);
    fo(int, i, 0, n) {
        int newPos = pos1.size() + pos0.size();
        if (s[i] == '0') {
            if (pos1.empty()) {
                pos0.push_back(newPos);
            } else {
                newPos = pos1.back();
                pos1.pop_back();
                pos0.push_back(newPos);
            }
        } else {
            if (pos0.empty()) {
                pos1.push_back(newPos);
            } else {
                newPos = pos0.back();
                pos0.pop_back();
                pos1.push_back(newPos);
            }
        }
        ans[i] = newPos;
    }
    cout << pos1.size() + pos0.size() << enl;
    for (auto it : ans) {
        cout << it + 1 << " ";
    }
    cout << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}