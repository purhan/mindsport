#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, b) for (int i=a; i<(b); i++)
#define forev(i, b, a) for (int i = (b)-1; i >= a; i--)
typedef long long int 	lli;
typedef long double 	ld;
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define endl 			"\n"
#define fast 			ios_base::sync_with_stdio(0); cin.tie(0);
// #define PI 3.1415926535897932384626
// const int MOD = 1000000007; // const ll INF = 1e18; // const int MX = 100001;
//==================================================================================

int main() {
	fast;
	int t; cin >> t; while (t--) {
		int a, b, c, n; cin >> a >> b >> c >> n;
		bool ans = true;
		int total = n + a + b + c;
		// int miin = min(min(a, b), c);
		int mxx = max(max(a, b), c);
		// int range = mxx - miin;
		if ((total) % 3 != 0 || total / 3 < mxx) ans = false;
		(ans) ? cout << "YES" : cout << "NO";
		cout << endl;
	}
	return 0;
}