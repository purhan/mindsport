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

std::vector<int> divisors;

// void findDivisors(int n) {
// 	for (int i = 0; i <= sqrt(n); i++) {
// 		if (n % i == 0) {
// 			if (n / i == i) {
// 				divisors.push_back(i);
// 			}
// 			else {
// 				divisors.push_back(i);
// 				divisors.push_back(n / i);
// 			}
// 		}
// 	}
// }

void findDivisors(int n)
{
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			divisors.push_back(i);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
#endif
	/*int t; cin>>t; while(t--)*/
	int n; cin >> n;

	findDivisors(n);
	string ans;
	fo(i, 0, divisors.size()) {
		if (divisors[i] % 4 == 0 || divisors[i] % 7 == 0) {
			ans = "YES";
			break;
		} else {
			int div = divisors[i];
			while (div != 0) {
				int temp = div % 10;
				div /= 10;
				if (temp == 4 || temp == 7) {
					ans = "YES";
				} else {
					ans = "NO";
					break;
				}
			}
		}
		if (ans == "YES") break;
	}
	cout << ans;


	return 0;
}