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
// #define PI 3.1415926535897932384626
// const int MOD = 1000000007; const lli INF = 1e18; const int MX = 100001;

void solve() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int cnt = 0;
    if (s1.length() != s2.length()) {
        cout << "NO";
        return;
    }

    int a = -1, b;
    for (int i = 0; i < (int)s1.length(); ++i) {
        if (s1[i] != s2[i]) {
            cnt++;
            if (a == -1) a = i;
            b = i;
        }
    }

    if (cnt != 2) {
        cout << "NO";
        return;
    }

    swap(s1[a], s1[b]);

    cout << ((s1 == s2) ? "YES" : "NO") << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}