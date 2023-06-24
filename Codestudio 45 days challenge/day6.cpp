#include <iostream>
#include <unordered_map>

using namespace std;

int findMajorityElement(int arr[], int n) {
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int majorityCount = n / 2;

    for (auto it : freq) {
        if (it.second > majorityCount) {
            return it.first;
        }
    }

    return -1;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        int majorityElement = findMajorityElement(arr, N);
        cout << majorityElement << endl;
    }

    return 0;
}


/*
Let's break down the code step by step:

The code aims to find the majority element in each test case of the given array.
The findMajorityElement function takes an integer array arr and its size n as parameters and returns the majority element in the array.
Inside the function, an unordered map freq is used to store the frequency count of each element in the array.
A loop iterates through the array and updates the frequency count of each element in the map.
After counting the frequencies, the majorityCount is calculated as n / 2, which represents the minimum count required for an element to be considered a majority element.
Another loop iterates through the map and checks if any element has a frequency count greater than the majorityCount.
If such an element is found, it means it is the majority element, so we return that element.
If no majority element is found, we return -1.
In the main function, the number of test cases T is read from the input using cin.
A loop iterates T times to process each test case.
For each test case, the size of the array N is read from the input using cin.
An array arr of size N is created to store the array elements.
The elements of the array are read from the input and stored in the array arr using a loop.
The findMajorityElement function is called with the array arr and its size N, and the result is stored in the variable majorityElement.
Finally, the value of majorityElement is printed as the output using cout.
The process is repeated for each test case.
This code efficiently calculates the majority element in each test case using an unordered map to count the frequencies of the elements.

*/