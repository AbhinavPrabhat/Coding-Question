#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& arr, int m) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == m) {
            return mid;
        } else if (arr[mid] < m) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return left;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int position = searchInsert(arr, m);
    cout << position << endl;

    return 0;
}


/*
Let's break down the code step by step:

The code aims to find the index where the target value m should be inserted in a sorted array arr.

The searchInsert function takes a reference to a vector arr and an integer m as parameters and returns the index where m should be inserted.

Inside the function, left is initialized to 0, representing the leftmost index of the array, and right is initialized to arr.size() - 1, representing the rightmost index of the array.

The function uses a while loop to perform a binary search on the array.

In each iteration of the loop, the middle index mid is calculated as left + (right - left) / 2. This ensures that the middle index is always rounded down to the nearest integer.

If the element at the middle index arr[mid] is equal to the target value m, it means we have found a match. In this case, we immediately return mid as the index where m is found in the array.

If arr[mid] is less than m, it means the target value should be placed in the right half of the remaining array. Therefore, we update left = mid + 1 to search in the right half of the array.

If arr[mid] is greater than m, it means the target value should be placed in the left half of the remaining array. Therefore, we update right = mid - 1 to search in the left half of the array.

The loop continues until left becomes greater than right, indicating that the target value was not found in the array.

In this case, we return the value of left as the index where m should be inserted to maintain the sorted order.

In the main function, the length of the array n and the target value m are read from the input using cin.

A vector arr of size n is created to store the array elements.

The elements of the array are read from the input and stored in the vector arr using a loop.

The searchInsert function is called with the array vector arr and the target value m, and the result is stored in the variable position.

Finally, the value of position is printed as the output using cout.

This code efficiently performs a binary search to find the index where the target value should be inserted in a sorted array while maintaining the sorted order.

*/