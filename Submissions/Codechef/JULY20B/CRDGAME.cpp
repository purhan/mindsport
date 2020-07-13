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

int digitSum(string s) {
    int sum = 0;
    fo(int, i, 0, (int)s.length()) {
        sum += (int)(s[i] - '0');
    }
    // cout << enl << sum << enl;
    return sum;
}

void solve() {
    int n; cin >> n;
    string a[n], b[n];
    int pA = 0, pB = 0;
    fo(int, i, 0, n) {
        cin >> a[i] >> b[i];
        if (digitSum(a[i]) > digitSum(b[i])) pA++;
        else if (digitSum(a[i]) < digitSum(b[i])) pB++;
        else {pA++; pB++;}
    }

    if (pA == pB) {
        cout << "2 " << pA << enl;
        return;
    }

    if (pA > pB) {
        cout << "0 " << pA << enl;
        return;
    } else {
        cout << "1 " << pB << enl;
        return;
    }

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}