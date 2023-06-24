#include<bits/stdc++.h>
using namespace std;

int main(){

  int N;
  cin>> N;
  string S,T;
  cin >> S;
  cin >> T;

  for (int i = 0; i < N; i++) {
        char sChar = S[i];
        char tChar = T[i];

        if (sChar == tChar)
            continue;
        if ((sChar == '1' && tChar == 'l') || (sChar == 'l' && tChar == '1'))
            continue;
        if ((sChar == '0' && tChar == 'o') || (sChar == 'o' && tChar == '0'))
            continue;

        cout << "No";
        return 0;
    }

    cout << "Yes";
    return 0;
  
}