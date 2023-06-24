#include<bits/stdc++.h>
typedef unsigned long long int ll;

using namespace std;

int main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "r", stdout);
  #endif
  int t; 
  cin>> t;
  for(int tt =0;tt<t;tt++){
    int a,b;
    cin>>a>>b;
    cout <<a+b<<"\n";
  }

  return 0; 
}