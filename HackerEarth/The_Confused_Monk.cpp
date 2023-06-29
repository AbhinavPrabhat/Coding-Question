#include<bits/stdc++.h>
using namespace std;
int monkQuotient = 1e9+7;


int gcd(int a, int b){
  if(b==0) return a;
  return gcd(b,a%b);
}

int gcdArray(vector<int> a, int n){
  int result = a[0]; 
  for(int i=1;i<n;i++){
    result = gcd(result,a[i]);
  }
  return result;
}

int factorial(vector<int> a, int n){
  int fx = 1;
  for(int i =0;i<n; i++){
    fx = (1LL*fx*a[i])%monkQuotient;
  }
  return fx;
}

int solveEquation(int fx, int gx) {
  int ans=1;
  while(gx){
    if(gx&1){
      ans = (ans*1LL*fx)%monkQuotient;
    }
    fx = (fx*1LL*fx)%monkQuotient;
    gx >>=1;
  }
  return ans;
}


int main(){

  int n;
  cin >> n; 
  vector<int> a(n);
  for(int i =0; i<n;i++){
    cin >> a[i];
  }
  
  int gx = gcdArray(a,n);
  int fx = factorial(a,n);

  int equationResult = solveEquation(fx, gx);
  cout << equationResult << endl;

  

  return 0;
}