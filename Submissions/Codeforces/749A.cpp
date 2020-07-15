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

int n;

int main() {
	fast;
	// int t; cin >> t; while (t--)
	cin >> n;
	int cnt = 0;
	std::vector<int> v;
	if (n % 2 == 0) {
		while (n != 0) {
			v.push_back(2);
			n -= 2;
			cnt++;
		}
	}
	else {
		while (n > 3) {
			v.push_back(2);
			n -= 2;
			cnt++;
		}
		if (n == 3) {
			v.push_back(3);
			n -= 3;
			cnt++;
		}
	}
	cout << cnt << endl;
	for (auto c : v) {
		cout << c << " ";
	}
	cout << endl;

	return 0;
}