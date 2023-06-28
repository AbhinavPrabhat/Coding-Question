// A number is called almost prime if it has exactly two distinct prime divisors. For example, numbers 6, 18, 24 are almost prime, while 4, 8, 9, 42 are not. Find the amount of almost prime numbers which are between 1 and n, inclusive.

// for this question my approach is 
// 1) take a vector which stores a vector of prime factors of each number. 
// 2) now check in the intial vector at each index if the vector stored is of size 2 then increase the count. 

#include<bits/stdc++.h>
using namespace std;

int countPrime(int n) {
    vector<vector<int>> number;
    for (int num = 1; num <= n; num++) {
        vector<int> prime_factors;
        int temp = num;
        for (int i = 2; i * i <= temp; i++) {
            while (temp % i == 0) {
                prime_factors.push_back(i);
                while (temp % i == 0) {
                    temp /= i;
                }
            }
        }
        if (temp > 1) {
            prime_factors.push_back(temp);
        }
        number.push_back(prime_factors);
    }

    int count = 0;
    for (const vector<int>& innerVector : number) {
        if (innerVector.size() == 2) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int result = countPrime(n);
    cout << result << endl;
    return 0;
}


// first attempt

// #include<bits/stdc++.h>
// using namespace std; 

// int countPrime(int n){
//   vector<vector<int>> number;
//   for(int i=1;i<=n;i++){
//   vector<int> prime_factors;
//   for(int i =2; i*i<=n;i++){
//     while(n%i==0){
//       prime_factors.push_back(i);
//       n/=i;
//     }
//   }
//   if(n>1){
//     prime_factors.push_back(n);
//   }
//   number.push_back(prime_factors);

// }
// int count =0; 
// for (const vector<int>& innerVector : number) {
//         if(innerVector.size()==2){
//           count++;
//         }
//     }
//     return count;

// }

// int main(){

//   int n;
//   cin >> n;
//     countPrime(n);
// }