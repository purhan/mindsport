#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, b) for (int i=a; i<(b); i++)
#define forev(i, b, a) for (int i = (b)-1; i >= a; i--)
typedef long long int 	lli;
typedef long double 	ld;
#define mp 				make_pair
#define pb 				push_back
#define ff 				first
#define ss 				second
#define lb 				lower_bound
#define ub 				upper_bound
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define endl 			"\n"
#define fast 			ios_base::sync_with_stdio(0); cin.tie(0);
// #define PI 3.1415926535897932384626
// const int MOD = 1000000007;
// const ll INF = 1e18;
// const int MX = 100001;
//==================================================================================

int main() {
	fast;
	int t; cin >> t; while (t--) {
		lli n, k; cin >> n >> k;
		string s; cin >> s;
		lli cnt = 0;
		std::vector<lli> v;
		int status = 0;

		fo(i, 0, n) {
			if (s[i] == '0') {
				// cout << 'j';
				cnt++;
			}
			if (s[i] == '1') {
				if (s[n - cnt] == '1') cnt -= k;
				if (s[cnt + 1] == '1') cnt -= k;
				v.pb(cnt);
				status = 1;
				// cout << cnt;
				cnt = 0;
			}
		}

		if (status == 0) v.pb(n);

		lli ans = 0;

		if (s.length() <= k && status == 0) ans = 1;


		fo(i, 0, v.size()) {
			lli temp = v[i];
			while (temp > k) {
				temp -= k + 1;
				ans++;
				status = 1;
			}
			if (temp < 0) ans--;
		}

		cout << ans << endl;

	}

	return 0;
}