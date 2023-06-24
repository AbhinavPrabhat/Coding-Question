#include <iostream>
#include <vector>
#include <bits/stdc++.h>


using namespace std;

int findSecondLargest(int n, vector<int> &arr) {
    int largest = INT_MIN;  // Initialize largest to the lowest possible value
    int secondLargest = INT_MIN;  // Initialize secondLargest to the lowest possible value

    // Iterate over each element in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            // Update secondLargest with the previous largest value
            secondLargest = largest;
            // Update largest with the current element
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > secondLargest) {
            // Update secondLargest if the current element is smaller than largest but greater than secondLargest
            secondLargest = arr[i];
        }
    }

    // Check if secondLargest has been updated
    if (secondLargest != INT_MIN) {
        return secondLargest;
    } else {
        return -1;  // No second largest element found
    }
}

int main() {
    int T;
    cin >> T;

    // Process each test case
    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;

        vector<int> arr(N);

        // Read the array elements
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        // Call the findSecondLargest function
        int secondLargest = findSecondLargest(N, arr);

        // Print the result
        cout << secondLargest << endl;
    }

    return 0;
}
