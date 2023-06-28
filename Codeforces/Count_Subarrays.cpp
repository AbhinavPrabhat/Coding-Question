// You are given an array A of size N.
// . Your task is to find the number of subarrays within the given array such that the Bitwise XOR of all elements in the subarray has an odd number of set bits (i.e., 1s).

// The subarray of A is a contiguous part of the array A.

// for this question my approach is 

// 1) take number of test cases as input 
// 2) now take input of N as size of array 
// 3) now declare a vector a(N);
// 4) take input in that vector;
// 5) take a another vector witch stores subarrays of a
// 6) for each index index of vector storing subarrays has a array. so now calculate Xor of each array. 
// 7) after calculating the xor replace the index with xor result. 
// take a counter here
// 8) now check for each index if builtin_popcount gives odd number then increase the counter. 
// 9) cout the counter 



#include<bits/stdc++.h>
using namespace std;

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
  vector<vector<int>> subArray;
  for(int start =0; start<n;start++){
    for(int end =start;end<n;end++){
      vector<int> temp;
      for(int i =start;i<=end;i++){
        temp.push_back(a[i]);
      }
      subArray.push_back(temp);
    }
  }
  int counter =0;
  for(const vector<int>&sub : subArray){
    int xorResult =0;
    for(int num :sub){
      xorResult ^=num;
    }
    if(__builtin_popcount(xorResult)%2 != 0){
      counter++;
    }
  }
  
  cout << counter << endl;
  }

return 0;

}