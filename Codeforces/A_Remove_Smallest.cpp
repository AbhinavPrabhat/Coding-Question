#include<bits/stdc++.h>
using namespace std;



int main (){

  int t;
  cin >> t; 
  while(t--){
    int n;
    cin >> n;
    int a[n]; 
    for(int i =0; i<n;i++){
      cin >> a[i]; 
    }

    // bool possible = true; 
    // for(int i =0;i<n;i++){
    //   if(abs(a[i]-a[i+1]>1)){
    //     possible = false;
    //     break; 
    //   }
    // }

    // if(possible){
    //   cout << "YES" << '\n';
    // }else{
    //   cout << "NO" << '\n';
    // }
    int minElement = INT_MAX; 
    for(int i=0; i<n;i++){
      if(a[i]<minElement){
        minElement = a[i];
      }
      
    }
    bool possible = true;
        for (int i = 0; i < n; i++) {
            if (a[i] > minElement + 1) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
  
  return 0; 
}