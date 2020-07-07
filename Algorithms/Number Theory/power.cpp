long long power(long long a, long long b){
  int mod = 1000000007;	  
  a%=mod;
  long long res = 1;
  while(b>0){
    if (b%2 == 1){
      res *= a;
      res %= mod;
    }
    a*=a; a%=mod;
    b/=2;
  }
  return res;
}
