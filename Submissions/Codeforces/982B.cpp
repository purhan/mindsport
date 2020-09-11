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
    int n, x; cin >> n;
    vector<pair<int, int>> p;
    stack<int> st;
    fo(int, i, 1, n + 1) {
        cin >> x;
        p.push_back({x, i});
    }
    sort(p.begin(), p.end());
    int k = 0;
    string s; cin >> s;
    fo(int, i, 0, n + n) {
        if (s[i] == '0') {
            st.push(p[k].second);
            cout << p[k++].second << " ";
        } else {
            cout << st.top() << ' ';
            st.pop();
        }
    }
    cout << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}