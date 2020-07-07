#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
  int n; cin>>n;
  string isTriangle = "NO";
  int adj[n+1];
  for(int i = 1; i<=n; i++){
    cin>>adj[i];
  }
  for(int i = 1; i<=n; i++){
    int a = i;
    int b = adj[a];
    int c = adj[b];
    if(a == adj[c]) isTriangle = "YES";
  }

  cout<<isTriangle;







  return 0;
}