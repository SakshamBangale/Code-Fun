// Given an integer array, find the maximum sum of a contiguous subarray.

#include <stdio.h>
#include <limits.h>

int maxSubarraySum(int arr[], int n) {
    int max_sum = INT_MIN;
    int current_sum = 0;

    for (int i = 0; i < n; i++) {
        current_sum += arr[i];

        if (current_sum > max_sum) {
            max_sum = current_sum;
        }

        if (current_sum < 0) {
            current_sum = 0;
        }
    }

    return max_sum;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubarraySum(arr, n);

    printf("Maximum subarray sum is: %d\n", result);

    return 0;
}
