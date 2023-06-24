#include<bits/stdc++.h>
using namespace std;

int main(){

  int N ;

  cin >> N;

  int r = N%5; 
  int nearestStation;

  if(r <=2){
    nearestStation = N-r;

  }else {
    nearestStation= N+(5-r);
  }

  cout << nearestStation;
}