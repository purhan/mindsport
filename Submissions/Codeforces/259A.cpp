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
// const int MOD = 1000000007; // const ll INF = 1e18; // const int MX = 100001;
//==================================================================================

void solve() {
    string board[8];
    for (int i = 0; i < 8; ++i) {
        cin >> board[i];
        for (int j = 0; j < 8; ++j) {
            if (board[i][j] == board[i][j + 1]) {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}