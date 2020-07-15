#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool inMiddle(int a, int b, int c){
  if(a>b && b>c) return true;
  if(a<b && b<c) return true;
  return false;
}

int main(){
  int n; cin>>n;
  int arr1[n];
  int arr2[n];
  for(int i = 0; i<3; i++){
    int a, b; cin>>a>>b;
    arr1[i] = a;
    arr2[i] = b;
  }
  if(inMiddle(arr1[1], arr1[0], arr1[2]) || inMiddle(arr2[1], arr2[0], arr2[2])){
    cout<<"NO";
  }else{
    cout<<"YES";
  }
  return 0;
}