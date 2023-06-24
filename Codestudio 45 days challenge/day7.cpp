#include <iostream>
#include <vector>
#include <functional>

using namespace std;

vector<int> findLangford(int n) {
    vector<int> langford(2 * n, -1);

    // Helper function to check if a position is valid for a number
    auto isValidPosition = [&](int num, int pos) {
        return (pos + num + 1 < 2 * n) && (langford[pos] == -1) && (langford[pos + num + 1] == -1);
    };

    // Recursive function to find the Langford pairs
    function<bool(int)> solveLangford = [&](int num) {
        if (num == 0) {
            return true;
        }

        for (int i = 0; i < 2 * n; i++) {
            if (isValidPosition(num, i)) {
                langford[i] = num;
                langford[i + num + 1] = num;

                if (solveLangford(num - 1)) {
                    return true;
                }

                // Backtrack if the current position doesn't lead to a solution
                langford[i] = -1;
                langford[i + num + 1] = -1;
            }
        }

        return false;
    };

    // Start with the maximum number N and recursively find the Langford pairs
    if (solveLangford(n)) {
        return langford;
    } else {
        return {-1};
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> langford = findLangford(N);

        if (langford[0] == -1) {
            cout << -1 << endl;
        } else {
            for (int num : langford) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}


/*
Certainly! Here's a detailed explanation of the code:

The code starts by including the necessary headers and using the std namespace.

The function findLangford takes an integer n as input and returns a vector of integers. This function is responsible for finding the Langford pairs.

Inside the findLangford function, a vector called langford is initialized with size 2 * n and all elements are set to -1. This vector will store the Langford pairs.

The code defines a lambda function isValidPosition to check if a given position is valid for a number in the Langford pairs. It checks if the position is within the vector bounds, if the current position and the position ahead are both unassigned (-1).

The code then defines a recursive lambda function called solveLangford. This function takes a number num as input and tries to find the Langford pairs starting from that number.

Inside the solveLangford function, the base case is when num becomes 0, indicating that all Langford pairs have been found. In this case, the function returns true.

The function uses a loop to iterate over possible positions to assign the current number num. It checks if the position is valid using the isValidPosition lambda function.

If the position is valid, the current number num is assigned to the position and the position ahead. Then, the function makes a recursive call to solveLangford with num decremented by 1.

If the recursive call returns true, it means that a valid Langford pair arrangement has been found, and the function returns true to propagate the result.

If the recursive call returns false, it means that the current position doesn't lead to a valid solution. In this case, the code backtracks by resetting the assignments for the current number num and continues to explore other positions.

After the loop exhausts all possible positions, the function returns false to indicate that no valid Langford pair arrangement was found.

Back in the findLangford function, it starts the search for Langford pairs by calling solveLangford with the maximum number n.

If solveLangford returns true, it means that a valid Langford pair arrangement has been found, and the function returns the langford vector.

If solveLangford returns false, it means that no valid Langford pair arrangement was found, and the function returns a vector with a single element -1 to indicate the absence of a valid arrangement.

In the main function, it reads the number of test cases T from input and enters a loop to process each test case.

For each test case, it reads the value of N, the size of the array, from input.

It calls the findLangford function with N to find the Langford pairs.

If the first element of the langford vector is -1, it means no valid Langford pair arrangement was found, so it prints -1.

Otherwise, it iterates over the langford vector and prints each number followed by a space.

Finally, it moves to the next test case and repeats the process.

That's the detailed explanation of the code. It uses recursive backtracking to find the Langford pairs and handles the case when no valid arrangement is possible.
*/