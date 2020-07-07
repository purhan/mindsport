#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void addEdge(int adj[], int u, int v)
{
	adj[u] = v;
}

void checkFirst (int adj[], int n, int f){
  int visited[n] = {0};
  while (visited[f]<=1) {
		visited[f]++;
    f = adj[f]-1;
  }
	cout<<f+1<<' ';
}

int main()
{
	int n; cin>>n;
	int adj[n];
  for(int i = 0; i<n; i++){
    int temp = 0; cin>>temp;
    addEdge(adj, i, temp);
  }
  for(int j = 0; j<n; j++){
    checkFirst(adj, n, j);
  }


	return 0;
}