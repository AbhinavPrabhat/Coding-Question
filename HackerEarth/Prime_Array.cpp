#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
  if(n<=1) return false;
  for(int i =2;i*i<=n;i++){
    if(n%i==0) return false;
  }
  return true;
}


int main(){
int t;
cin >> t;
while(t--){
  int n; 
  cin >> n;
  vector<int> a(n);

  for(int i =0;i<n;i++){
    cin >> a[i];
  }

  int ct =0;
  for(int i =0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
      for(int k=j+1;k<n;k++){
          long long product = a[i]*a[j]*a[j];
          if(isPrime(product)){
            ct++;
          }
      }
    }
  }

cout << ct << endl;

}
return 0;
}