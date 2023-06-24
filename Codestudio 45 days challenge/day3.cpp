#include <iostream>
#include <cmath>

int power(int a, int b, int m) {
    if (b == 0)
        return 1;

    long long int result = 1;
    long long int base = a % m;

    while (b > 0) {
        if (b & 1) {
            result = (result * base) % m;
        }
        base = (base * base) % m;
        b >>= 1;
    }

    return static_cast<int>(result);
}

int powerOfPower(int A, int B, int C, int M) {
    int exp = power(B, C, M - 1);
    return power(A, exp, M);
}

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int A, B, C, M;
        std::cin >> A >> B >> C >> M;

        int ans = powerOfPower(A, B, C, M);
        std::cout << ans << std::endl;
    }

    return 0;
}


/*

Let's go through the code step by step:

The power function is defined to calculate a^b % m using modular exponentiation. It takes three parameters: a as the base, b as the exponent, and m as the modulus.

The first check in the power function is to handle the case when the exponent b is 0. In this case, the function returns 1, as any number raised to the power of 0 is always 1.

The result variable is initialized to 1. It will store the final result of the modular exponentiation.

The base variable is assigned the value of a modulo m. This is done to ensure that the calculations remain within the modulus.

The while loop iterates as long as the exponent b is greater than 0.

Inside the loop, the condition b & 1 checks if the current bit of b is 1. If it is, it means that the current power of base should be multiplied with the result.

The result is multiplied with base and then modulo m is taken to ensure the intermediate calculations remain within the modulus.

The base is updated by multiplying it with itself and then modulo m is taken. This effectively squares the base in each iteration.

The b is right-shifted by 1, effectively dividing it by 2, to process the next bit of the exponent in the next iteration.

After the loop, the final result is returned, casted to an int.

The powerOfPower function is defined to calculate A^(B^C) % M. It takes four parameters: A, B, C, and M.

The exp variable is assigned the result of power(B, C, M - 1). This calculates B^C % (M - 1) using the power function. It is necessary to calculate the exponent exp modulo M - 1 because of Fermat's Little Theorem, which states that a^(p-1) ≡ 1 (mod p) for any prime p, where M is a prime number.

Finally, the power function is called again with parameters A, exp, and M to calculate A^exp %


*/