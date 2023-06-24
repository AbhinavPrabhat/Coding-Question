#include <iostream>
#include <vector>

using namespace std;

// Function to check if the matrix is square
bool isSquareMatrix(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int columns = matrix[0].size();

    return (rows == columns);
}

// Function to print the matrix
void printMatrix(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int columns = matrix[0].size();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, columns;
    cin >> rows >> columns;

    // Input matrix
    vector<vector<int>> matrix(rows, vector<int>(columns));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    // Print the matrix
  
    printMatrix(matrix);

    // Check if the matrix is square
    if (isSquareMatrix(matrix)) {
        cout << "The entered array is a square matrix." << endl;
    } else {
        cout << "The entered array is not a square matrix." << endl;
    }

    return 0;
}
