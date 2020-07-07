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
//==================================================================================

void solve() {
    char a[8][8];
    fo(int, i, 0, 8) {
        fo(int, j, 0, 8) {
            cin >> a[i][j];
        }
    }

    int miinA = 99;
    fo(int, j, 0, 8) {
        fo(int, i, 0, 8) {
            if (a[i][j] == 'B')
                break;

            if (a[i][j] == 'W')
                miinA = min(miinA, i);
        }
    }


    int miinB = 0;
    forev(int, j, 8, 0) {
        forev(int, i, 8, 0) {
            if (a[i][j] == 'W')
                break;

            if (a[i][j] == 'B')
                miinB = max(miinB, i);
        }
    }
    miinB = 7 - miinB;

    // cout << miinA << " " << miinB << enl;

    cout << ((miinA > miinB) ? 'B' : 'A') << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}