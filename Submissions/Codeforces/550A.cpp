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
	// int t; cin >> t; while (t--)
	string s; getline(cin, s);
	bool ans = false;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'A' && s[i + 1] == 'B') {
			for (int j = i + 2; j < s.size(); ++j) {
				if (s[j] == 'B' && s[j + 1] == 'A') {
					ans = true;
					break;
				}
			}
		}
		if (ans) break;
		if (s[i] == 'B' && s[i + 1] == 'A') {
			for (int j = i + 2; j < s.size(); ++j) {
				if (s[j] == 'A' && s[j + 1] == 'B') {
					ans = true;
					break;
				}
			}
		}
	}

	(ans) ? cout << "YES" : cout << "NO";

	return 0;
}