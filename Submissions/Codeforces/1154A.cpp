#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fo(i, a, b) for (int i=a; i<(b); i++)
#define forev(i, b, a) for (int i = (b)-1; i >= a; i--)
typedef long long int 	lli;
typedef long double 	ld;
#define endl 			"\n"
#define fast 			ios_base::sync_with_stdio(0); cin.tie(0);
// #define PI 3.1415926535897932384626
// const int MOD = 1000000007; // const ll INF = 1e18; // const int MX = 100001;
// ==================================================================================

int main() {
	fast;
	// int t; cin >> t; while (t--)
	lli arr[4]; cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

	sort(arr, arr + 4);

	lli a = abs(arr[0] - arr[1] - arr[2]) / 2;
	lli b = abs(arr[2] - arr[1] - arr[0]) / 2;
	lli c = abs(arr[1] - arr[2] - arr[0]) / 2;

	cout << a << " " << b << " " << c << endl;

	return 0;
}