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
    unordered_map<int, int> mp;
    int four = 0, two = 0, six = 0, eight = 0;
    fo(int, i, 0, n) {
        int temp; cin >> temp;
        mp[temp]++;
    }

    for (auto i : mp) {
        if (i.second >= 8) eight++;
        else if (i.second >= 6) six++;
        else if (i.second >= 4) four++;
        else if (i.second >= 2) two++;
    }

    int q; cin >> q;
    while (q--) {
        char c; cin >> c;
        int temp; cin >> temp;

        if (mp[temp] >= 8) eight--;
        else if (mp[temp] >= 6) six--;
        else if (mp[temp] >= 4) four--;
        else if (mp[temp] >= 2) two--;

        if (c == '+') {
            mp[temp]++;
        } else {
            mp[temp]--;
        }


        if (mp[temp] >= 8) eight++;
        else if (mp[temp] >= 6) six++;
        else if (mp[temp] >= 4) four++;
        else if (mp[temp] >= 2) two++;
        string ans = "NO";

        if (eight) ans = "YES";
        else if (six >= 2) ans = "YES";
        else if ((six && four) || (six && two)) ans = "YES";
        else if (four >= 2) ans = "YES";
        else if (four && two >= 2) ans = "YES";

        cout << ans << enl;

    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}