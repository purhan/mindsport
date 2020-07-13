#include <bits/stdc++.h>
using namespace std;
#define fo(int, i, a, b)        for (int i=a; i<(b); i++)
#define forev(int, i, b, a)     for (int i = (b)-1; i >= a; i--)
#define uns                     unsigned
#define lli                     long long int
#define ld                      long double
#define all(x)                  x.begin(), x.end()
#define sortall(x)              sort(all(x))
#define pb(x)                   push_back(x)
#define enl                     "\n"
#define FF                      first
#define SS                      second
#define undmap                  unordered_map
// #define PI 3.1415926535897932384626
// const int MOD = 1000000007; const lli INF = 1e18; const int MX = 100001;


lli swapCnt(undmap<lli, lli> ma, undmap<lli, lli> mb, lli cnt, set<lli> s, lli miin) {
    lli res = 0;
    for (auto i : s) {
        lli mxx = max(ma[i], mb[i]);
        if (mxx / 2 <= cnt) {
            if (i * (mxx / 2) > 2 * miin * (mxx / 2)) {
                res += (2 * miin * (mxx / 2));
            } else {
                res += i * (mxx / 2);
            }
            cnt -= mxx / 2;
        } else {

            if (i * cnt <= 2 * cnt * miin) res += (i * cnt);
            else res += (miin * cnt * 2);

            cnt = 0;
        }

        if (cnt == 0) break;
    }
    return res;
}

void solve() {
    lli n; cin >> n;
    vector<lli> a, b;
    lli xorr = 0;
    fo(lli, i, 0, n) {
        lli temp; cin >> temp;
        a.pb(temp);
        xorr ^= temp;
    }
    fo(lli, i, 0, n) {
        lli temp; cin >> temp;
        b.pb(temp);
        xorr ^= temp;
    }
    if (xorr != 0) {
        cout << -1 << enl;
        return;
    }

    sortall(a); sortall(b);
    undmap<lli, lli> ma, mb;

    set<lli> s;
    lli i = 0, j = 0, cnt = 0;
    while (i < n && j < n) {
        if (a[i] == b[j]) {
            i++; j++;
        } else if (a[i] > b[j]) {
            ma[b[j]]++;
            s.insert(b[j]);
            j++; cnt++;
        } else {
            mb[a[i]]++;
            s.insert(a[i]);
            i++; cnt++;
        }
    }

    while (i < n) {
        ma[a[i]] += 1;
        i++;
        cnt++;
        s.insert(a[i]);
    }

    while (j < n) {
        mb[b[j]] += 1;
        j++;
        cnt++;
        s.insert(b[j]);
    }

    lli miin = min(a[0], b[0]);
    cnt /= 4;

    lli ans = swapCnt(ma, mb, cnt, s, miin);
    cout << ans << enl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int testcase; cin >> testcase; for (int i = 1; i <= testcase; ++i)
        solve();
    return 0;
}