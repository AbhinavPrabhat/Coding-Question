#include <iostream>
#include <vector>

int findRowK(std::vector<std::vector<int>>& mat) {
    int n = mat.size();
    int rowK = -1;

    for (int i = 0; i < n; i++) {
        bool allZeros = true;
        bool allOnes = true;

        for (int j = 0; j < n; j++) {
            if (j != i && mat[i][j] != 0) {
                allZeros = false;
                break;
            }
        }

        if (allZeros) {
            for (int j = 0; j < n; j++) {
                if (j != i && mat[j][i] != 1) {
                    allOnes = false;
                    break;
                }
            }

            if (allOnes) {
                rowK = i;
                break;
            }
        }
    }

    return rowK;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<std::vector<int>> mat(n, std::vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cin >> mat[i][j];
            }
        }

        int rowK = findRowK(mat);
        std::cout << rowK << std::endl;
    }

    return 0;
}



/*
Explanation:
The code has been modified to improve the logic for checking all zeros in the row and all ones in the column.

Here's how the corrected logic works:

Initialize the variable rowK to -1. This will serve as the indicator if a valid row K is found.

Iterate over each row of the matrix using the variable i.

For each row i, check if all elements in the row except the diagonal element (mat[i][i]) are zeros. If any non-diagonal element is not zero, set the boolean variable allZeros to false and break the loop.

If all elements in the row are zeros (allZeros is true), check if all elements in the corresponding column (except the diagonal element) are ones. If any non-diagonal element is not one, set the boolean variable allOnes to false and break the loop.

If both allZeros and allOnes are true, a valid row K has been found. Update rowK with the value of i and break the loop.

After iterating over all rows, rowK will contain the valid row K value. If no valid row K is found, rowK will remain -1.

Finally, output the value of rowK for each test case.

I apologize for the confusion caused by the previous errors. Please try running the code again with the corrections. It should provide the correct output.


Certainly! Here's a detailed explanation of the code:

cpp


#include <iostream>
#include <vector>
int findRowK(std::vector<std::vector<int>>& mat) {
    int n = mat.size();
    int rowK = -1;

The findRowK function takes a 2D vector mat as input and returns the value of K (the row index) if a valid row K is found. Otherwise, it returns -1.
n stores the size of the square matrix (number of rows/columns).
rowK is initialized to -1 and will store the value of K if a valid row K is found.


cpp

    for (int i = 0; i < n; i++) {
        bool allZeros = true;
        bool allOnes = true;

The for loop iterates over each row of the matrix using the variable i.
Two boolean variables, allZeros and allOnes, are initialized to true for each row.


cpp

        for (int j = 0; j < n; j++) {
            if (j != i && mat[i][j] != 0) {
                allZeros = false;
                break;
            }
        }


This nested for loop checks if all elements in the current row i are zeros, except the diagonal element (mat[i][i]).
If any non-diagonal element is found to be non-zero, allZeros is set to false and the loop breaks.


cpp

        if (allZeros) {
            for (int j = 0; j < n; j++) {
                if (j != i && mat[j][i] != 1) {
                    allOnes = false;
                    break;
                }
            }


If allZeros is still true (indicating all elements in the row are zeros), this nested for loop checks if all elements in the corresponding column i (except the diagonal element) are ones.
If any non-diagonal element is found to be non-one, allOnes is set to false and the loop breaks.


cpp

            if (allOnes) {
                rowK = i;
                break;
            }
        }
    }


If allZeros and allOnes are both true, a valid row K has been found.
The value of i is assigned to rowK to store the valid row index, and the loop breaks.


cpp

    return rowK;
}
The function returns the value of rowK, which will be the valid row index if found, or -1 if no valid row K exists.



cpp


int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<std::vector<int>> mat(n, std::vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                std::cin >> mat[i][j];
            }
        }

        int rowK = findRowK(mat);
        std::cout << rowK << std::endl;
    }

    return 0;
}


In the main function, the code reads the number of test cases t.
The outer while loop runs t times to process each test case.
For each test case,

*/