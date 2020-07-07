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


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll a, b; cin>>a>>b;

  if (b%10 !=  1 && b%2 != 0){
    cout<<"NO";
    return 0;
  }

  vector<int> num;
  ll currentNum = b;
  while(currentNum != a){
    if(currentNum%2 == 0){
      num.push_back(currentNum);
      currentNum /= 2;
    }
    if(currentNum%10 == 1){
      num.push_back(currentNum);
      currentNum = (currentNum-(currentNum%10))/10;
    }
    if (currentNum%10 !=  1 && currentNum%2 != 0){
      cout<<"NO";
      return 0;
    }
    if(currentNum<a){
      cout<<"NO";
      return 0;
    }
    if(currentNum == a) break;
  }
  cout<<"YES"<<endl;
  cout<<num.size()+1<<endl;
  cout<<a<<" ";
  int temp = num.size();
  for(int i = 1; i<(num.size()); i++){
    cout<<num[temp-i]<<" ";
  }
  cout<<b;



  return 0;
}