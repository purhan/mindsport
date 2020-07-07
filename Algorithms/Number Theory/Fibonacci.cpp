#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


int64_t fib(int64_t n) {
    int64_t arr[n+1];
    arr[0] = 0; arr[1] = 1;
    for (int64_t i = 2; i<=n; ++i) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
}



int main() {
    int64_t n; cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}
