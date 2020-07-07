#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define fo(i,b,n) for(int i=b;i<n;i++)
#define lli long long int
#define si(x)	scanf("%d",&x)
#define sll(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define endl "\n"
#define PI 3.1415926535897932384626
const int mod = 1000000007;
/*===========================================================================*/


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
#endif

	int t; cin >> t; while (t--) {
		int n, k; cin >> n >> k;

		int P = 0;

		if (n == k) cout << 1 << endl;

		else {

			fo(i, 1, 40000) {
				if (n % i == 0) {
					if (i <= k) P = max(P, i);
					if (n / i <= k) P = max(P, n / i);
				}
			}
			cout << n / P << endl;
		}
	}
	return 0;
}