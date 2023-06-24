#include <bits/stdc++.h>
using namespace std;

void check(int N, string S){
  
  for(int i =0; i<=N-1;i++){
    if(S[i]==S[i+1]){
      cout << "No"<<'\n';
      return;
    }
  }
  cout << "Yes" << '\n';
}

int main(){
  int N;
  cin>> N;
  string S;
  cin >> S;
  if(S.length()!= N){
    cout << "invalid";
    return 0;
  }
  check(N,S);

  return 0;

}