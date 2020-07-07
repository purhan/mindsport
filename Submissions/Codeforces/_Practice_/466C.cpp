#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, b) for (long long int i=a; i<(b); i++)
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
	// int t; cin >> t; while (t--)
	lli n, s = 0; cin >> n;
	lli arr[n];
	lli cnt[1000010];
	fo(i, 0, n) cin >> arr[i], s += arr[i];

	if (s % 3 != 0) {
		cout << 0 << endl;
	} else {
		s /= 3;
		lli ss = 0;
		for (int i = n - 1; i >= 0 ; --i)
		{
			ss += arr[i];
			if (ss == s)
				cnt[i] = 1;
		}
		for (int i = n - 2 ; i >= 0 ; --i)
			cnt[i] += cnt[i + 1];

		long long ans = 0;
		ss = 0;
		for (int i = 0 ; i + 2 < n ; ++i) {
			ss += arr[i];
			if (ss == s)
				ans += cnt[i + 2];
		}
		cout << ans << "\n";
	}



	return 0;
}