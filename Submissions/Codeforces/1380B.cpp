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
    string s; cin >> s;
    int n = s.length();
    vector<int> hash(3, 0);
    for (char c : s) {
        if (c == 'P') hash[0]++;
        else if (c == 'S') hash[1]++;
        else hash[2]++;
    }

    char c;
    if (hash[0] >= hash[1] && hash[0] >= hash[2]) c = 'S';
    else if (hash[0] <= hash[1] && hash[1] >= hash[2]) c = 'R';
    else c = 'P';
    fo(int, i, 0, n) cout << c;
    cout << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}