#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){

long long X;
cin >> X;

int A = X/500;

int remainder = X%500; 
int B = remainder/5;

int total = (A*1000)+(B*5);

cout<< total;

 

}