#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, b) for (int i=a; i<(b); i++)
#define forev(i, b, a) for (int i = (b)-1; i >= a; i--)
typedef long long 		ll;
typedef long double 	ld;
typedef complex<ld> 	cd;
typedef pair<int, int> 	pi;
typedef pair<ll, ll> 	pl;
typedef pair<ld, ld> 	pd;
typedef vector<int> 	vi;
typedef vector<ld> 		vd;
typedef vector<ll> 		vl;
typedef vector<pi> 		vpi;
typedef vector<pl> 		vpl;
typedef vector<cd> 		vcd;
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
	// freopen("input.txt", "r", stdin);
	// fast;
	// int t; cin >> t; while (t--)

	double n, l; cin >> n >> l;
	vector<double> arr;

	fo(i, 0, n) {
		double temp;
		cin >> temp;
		arr.pb(temp);
	}

	sortall(arr);

	double mxx = 0;

	fo(i, 0, n - 1) {
		double temp =  abs(arr[i] - arr[i + 1]);
		mxx = max(mxx, temp);
	}

	mxx = max(mxx, 2 * arr[0]);
	mxx = max(mxx, 2 * (l - arr[n - 1]));

	cout << setprecision(10) << mxx / 2 << endl;

	return 0;
}