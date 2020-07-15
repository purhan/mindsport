#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define lli long long int
#define fo(i,b,n) for(int i=b;i<n;i++)
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


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

// #ifndef ONLINE_JUDGE
// 	freopen(fi, "r", stdin);
// 	freopen(fo, "w", stdout);
// #endif
	/*int t; cin>>t; while(t--)*/

	int n; cin >> n;
	int arr[n];
	bool div = false;
	int count = 0, zerCount = 0;
	fo(i, 0, n) {
		cin >> arr[i];
		if (arr[i] == 0) {
			div = true;
			zerCount++;
		}
		if (arr[i] == 5) count++;
	}
	if (!div) {
		cout << "-1";
		return 0;
	} else if (div && count == 0) {
		cout << 0;
		return 0;
	}
	do {
		if ((count * 5) % 9 == 0) {
			string ans = to_string(count);
			for (int i = 0; i < count; ++i) {cout << 5;}
			if (count == 0 && zerCount != 0) {
				cout << 0;
				return 0;
			}
			for (int i = 0; i < zerCount; ++i) {cout << 0;} return 0;
		}
	} while (count--);


	return 0;
}