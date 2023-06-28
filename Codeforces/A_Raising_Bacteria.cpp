
#include<bits/stdc++.h>
using namespace std;



int main (){

  int t;
  cin >> t; 
  int count = 0;
    while (t > 0) {
        if (t % 2 == 1) {
            count++;
        }
        t /= 2;
    }
  cout << count;
  return 0; 
}
