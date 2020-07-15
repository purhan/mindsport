#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include <algorithm>
using namespace std;
int s, n, a, b;
std::vector <pair <int, int >> v;
int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	// freopen("output.txt", "w", stdout);
// #endif
	cin >> s >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		if (s <= v[i].first) {
			cout << "NO";
			return 0;
		} else {
			s += v[i].second;
		}
	}
	cout << "YES";
}