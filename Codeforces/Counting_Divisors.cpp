#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int divisors = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisors++;
                if (n / i != i) {
                    divisors++;
                }
            }
        }
        
        cout << divisors << endl;
    }
    
    return 0;
}
