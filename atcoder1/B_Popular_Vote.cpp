#include<bits/stdc++.h>
using namespace std;

int main(){

  int N,M;
  cin >> N >> M;
  int a[N];
  // for(int i =0; i<N; i++){
  //   cin >> a[i];
  // }
  // int totalvotes =0;
  // for(int i =0; i<N;i++){
  //   totalvotes+=a[i];
  // }
  // double factor = 1.0 / (4 * M);
  //   double val = factor * totalvotes;
  

  for(int i=0; i<N; i++) cin>>a[i];
    
    long long sum=accumulate(a,a+N,0);
    
    double factor = 1.0 / (4 * M);
    double val = factor * sum;



  int selectedCount = 0;
  bool check = false;
  for(int i =0; i<N;i++){
    if(a[i]>=val){
      selectedCount++;
      if(selectedCount==M){
        check=true;
        break;
      }
    }
  }



  if(check){
    cout << "Yes";
  }else{
    cout<< "No";
    }

    return 0;
  }






