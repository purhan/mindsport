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
	uint64_t n, k; cin >> n >> k;

	fo(i, 0, k) {
		if (n % 10 == 0) n /= 10;
		else n -= 1;
	}

	cout << n << endl;

	return 0;
}