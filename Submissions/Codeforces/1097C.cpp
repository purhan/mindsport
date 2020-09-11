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
    unordered_map<int, int> mpA, mpB;
    int ans = 0;
    fo(int, i, 0, n) {
        string s; cin >> s;
        stack<char> st;
        for (auto c : s) {
            if (st.empty()) st.push(c);
            else if (c == ')' && st.top() == '(') st.pop();
            else st.push(c);
        }
        int a = 0, b = 0;
        while (!st.empty()) {
            if (st.top() == '(') a++;
            else b++;
            st.pop();
        }

        if (a && b) continue;
        if (!a && !b) ans++;
        else if (!a) mpB[b]++;
        else if (!b) mpA[a]++;
    }

    ans /= 2;
    for (auto it : mpA) {
        ans += min(it.second, mpB[it.first]);
    }

    cout << ans << enl;

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}