#include<bits/stdc++.h>
using namespace std;

int main(){

  int N;
  cin >> N;
  string S;
  int A;
  vector<pair<string,long long>> v(N);
  // vector<string> name(N);
  // vector<int> age(N);
  // for(int i=0;i<N;i++){
  //   cin >> S >> A;
  // name.push_back(S);
  // age.push_back(A);
  // }
  // vector<pair<string,int>> stringPair;

  // for(int i =0; i<N; ++i){
  //   stringPair.push_back(make_pair(name[i],age[i]));
  // }

  for(int i =0;i<N;i++){
    string S; cin >> S;
    long long X; cin >> X;

    v[i]= make_pair(S,X);
  }


  int index = -1;
  int minValue = INT_MAX;

  for(int i= 0;i<N;i++){
    if(v[i].second < minValue){
      minValue = v[i].second;
      index=i;
    }
  }

  for(int i= index;i<N;i++){
    cout << v[i].first << '\n';
  }
  for(int i =0; i<index;i++){
    cout << v[i].first << '\n';
  }
  
  }





