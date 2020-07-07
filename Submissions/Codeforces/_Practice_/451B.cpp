#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, b) 	for (int i=a; i<(b); i++)
#define forev(i, b, a) 	for (int i = (b)-1; i >= a; i--)
typedef long long int	lli;
typedef long double		ld;
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define enl	"\n"
#define fast	ios_base::sync_with_stdio(0); cin.tie(0);
// #define PI 3.1415926535897932384626
// const int MOD = 1000000007; // const ll INF = 1e18; // const int MX = 100001;
//==================================================================================

int main() {
	fast;
	// int t; cin >> t; while (t--)
	int n; cin >> n; int a[n + 1];
	bool ans = true;
	int lo, hi;
	fo(i, 1, n + 1) {
		cin >> a[i];
	}

	fo(i, 1, n + 1) {
		if (a[i] != i) {
			hi = max(a[i], i);
			lo = min(i, a[i]);
			swap(a[a[i]], a[i]);
			break;
		}
	}

	fo(i, 1, n + 1) {
		if (a[i] != i) {
			ans = false;
			break;
		}
	}

	if (ans) cout << "yes" << "\n" << lo << " " << hi; else cout << "no";

	return 0;
}