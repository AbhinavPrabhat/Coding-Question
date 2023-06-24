#include <iostream>
#include <cmath>
#include <limits>
#include <algorithm>

using namespace std;

long closestPair(pair<int, int>* coordinates, int n) {
    long minDistance = numeric_limits<long>::max();

    // Calculate the distance between each pair of points
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            long distance = (coordinates[i].first - coordinates[j].first) * (coordinates[i].first - coordinates[j].first)
                            + (coordinates[i].second - coordinates[j].second) * (coordinates[i].second - coordinates[j].second);
            minDistance = min(minDistance, distance);
        }
    }

    return minDistance;
}

int main() {
    int n;
    cin >> n;

    pair<int, int>* coordinates = new pair<int, int>[n];

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        coordinates[i] = make_pair(x, y);
    }

    long minDistance = closestPair(coordinates, n);
    cout << minDistance << endl;

    delete[] coordinates;

    return 0;
}



/*
The code aims to find the minimum distance between any pair of points from a given array of coordinates.
The closestPair function takes an array of pair<int, int> coordinates and the number of points as parameters and returns the minimum squared distance between any two points.
The using namespace std; statement allows direct use of standard library functions and types without the need for the std:: prefix.
The closestPair function begins by initializing minDistance with the maximum possible value of type long using numeric_limits<long>::max(). This ensures that any calculated distance will be smaller than the initial value.
The function then iterates through each pair of points in a nested loop using indices i and j.
For each pair of points, the squared distance between them is calculated as ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)), which corresponds to the square of the Euclidean distance between the points.
The calculated squared distance is compared with the current minimum distance using min(minDistance, distance). If the calculated distance is smaller, it becomes the new minimum distance.
After iterating through all possible point pairs, the function returns the minimum squared distance.
In the main function, the number of points is read from the input using cin.
An array of pair<int, int> coordinates is dynamically allocated using new to store the input coordinates.
The coordinates are then read from the input using cin and stored in the array.
The closestPair function is called with the array of coordinates and the number of points, and the result is stored in the minDistance variable.
Finally, the minimum squared distance is printed as the output using cout.
The memory allocated for the array of coordinates is freed using delete[] coordinates.
The program ends by returning 0 from the main function.
This code efficiently calculates the minimum squared distance between any pair of points using a nested loop. The use of pair<int, int> for coordinates allows for convenient storage and access of the points.

*/