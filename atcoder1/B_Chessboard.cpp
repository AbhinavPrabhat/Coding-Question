#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<string> s(8);
  for(int i =0; i<8;i++){
    cin >> s[i];
  }
  for(int i =0;i<8;i++){
    for(int j =0;j<8;j++){
      if(s[i][j]=='*'){
        cout<< "abcdefgh"[j]<< 8-i<< endl;
        return 0;
      }
    }
  }
  
}
