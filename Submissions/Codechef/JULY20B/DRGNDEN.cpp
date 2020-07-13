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
    lli n, quest; cin >> n >> quest;
    vector<lli> h;
    vector<lli> a;
    fo(lli, i, 0, n) {
        lli temp; cin >> temp;
        h.push_back(temp);
    }
    fo(lli, i, 0, n) {
        lli temp; cin >> temp;
        a.push_back(temp);
    }
    while (quest--) {
        lli q, start, end;
        cin >> q >> start >> end;
        lli slope = 0;
        if (q == 1) {
            a[start - 1] = end;
        } else {
            lli initPos = end - 1, finalPos = start - 1;
            if (initPos == finalPos) {
                cout << a[initPos] << enl;
                continue;
            }
            if (h[finalPos] <= h[initPos]) {
                cout << -1 << enl;
                continue;
            }
            slope = (finalPos - initPos) / abs(finalPos - initPos);
            lli next = initPos + slope , j = initPos, sum = a[initPos];
            int FLAG = 1;
            while (finalPos != next) {
                if (h[next] >= h[finalPos]) {
                    FLAG = 0;
                    break;
                }
                if (h[next] > h[j]) {
                    j = next;
                    sum += a[j];
                }
                next += slope;
            }

            if (FLAG == 0) cout << -1 << enl;
            else cout << sum + a[finalPos] << enl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    // int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
    solve();
    return 0;
}