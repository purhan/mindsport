#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define lli long long int
#define fo(i,b,n) for(int i=b;i<n;++i)
#define si(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define ss(s) scanf("%s",s)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define ps(s) printf("%s\n",s)
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define endl "\n"
#define PI 3.1415926535897932384626
const int mod = 1000000007;
/*===================================================================*/


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
#endif
	/*int t; cin>>t; while(t--)*/
	int n; cin >> n;
	int arr[n];
	fo(i, 0, n) cin >> arr[i];
	sort(arr, arr + n, greater<int>());
	int sum = 0;
	fo(i, 0, n) sum += arr[i];
	// cout << sum << endl;

	int ans = 0, count = 0;
	// fo(i, 0, n) {
	int k = 0;
	do {
		ans += arr[k];
		sum -= arr[k];
		count++;
		k++;
	} while (ans <= sum);
	// }
	// cout << ans << " " << sum << endl;
	cout << count;



	return 0;
}