#include <iostream>
#include <algorithm>
using namespace std;

long long calculateSum(long long val, int n, int index) {
    long long sum = 0;

    int leftCount = min(val - 1, index);
    long long leftSum = (long long)leftCount * (leftCount + 1) / 2;

    int rightCount = min(val - 1, n - index - 1);
    long long rightSum = (long long)rightCount * (rightCount + 1) / 2;

    sum = leftSum + rightSum + val;

    return sum;
}

int maxValue(int n, int index, int maxSum) {
    int left = 1;
    int right = maxSum;

    int result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        long long sum = calculateSum(mid, n, index);

        if (sum <= maxSum) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    int n = 3;
    int index = 2;
    int maxSum = 18;

    int result = maxValue(n, index, maxSum);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
