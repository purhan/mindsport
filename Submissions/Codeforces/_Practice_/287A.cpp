#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define fo(i,b,n) for(int i=b;i<n;i++)
#define ll long long
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
/*=============================================================================*/

string checkPossible(char arr[16]){

  for (int i = 0; i<12; i++)
  {
    if(i == 3 || i == 7 || i == 11) continue;
    int black = 0;
    if (arr[i] == '#') black++;
    if (arr[i+1] == '#') black++;
    if (arr[i+4] == '#') black++;
    if (arr[i+5] == '#') black++;
    if(black != 2) return "YES";
  }

  return "NO";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  char arr[16];
  fo(i,0,16){
    cin>>arr[i];
  }
  cout<<checkPossible(arr);

  return 0;
}