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
    lli n; cin >> n;
    int a[n];
    int hash[8] = {0};
    fo(lli, i, 0, n) {
        cin >> a[i];
        if (a[i] == 7 || a[i] == 5) {
            cout << -1;
            return;
        }
        hash[a[i]]++;
    }
    if (hash[1] != hash[2] + hash[3] || hash[1] != hash[6] + hash[4]) {
        cout << -1;
        return;
    } else if (hash[4] > hash[2] || hash[2] + hash[3] != hash[4] + hash[6]) {
        cout << -1;
        return;
    }

    int miin = min(hash[1], min(hash[2], hash[4]));
    fo(int, i, 0, miin) {
        hash[1]--;
        hash[2]--;
        hash[4]--;
        cout << "1 2 4\n";
    }

    miin = min(hash[1], min(hash[2], hash[6]));
    fo(int, i, 0, miin) {
        hash[1]--;
        hash[2]--;
        hash[6]--;
        cout << "1 2 6\n";
    }

    miin = min(hash[1], min(hash[3], hash[6]));
    fo(int, i, 0, miin) {
        hash[1]--;
        hash[3]--;
        hash[6]--;
        cout << "1 3 6\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}