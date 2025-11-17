// Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm.
// Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = INT_MIN;
    int curr_sum = 0;

    for (int i = 0; i < n; i++) {
        curr_sum += arr[i];

        if (curr_sum > max_sum) {
            max_sum = curr_sum;
        }

        if (curr_sum < 0) {
            curr_sum = 0;
        }
    }

    // Check if all numbers are negative
    int all_negative = 1;
    int max_negative = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            all_negative = 0;
            break;
        }
        if (arr[i] > max_negative) {
            max_negative = arr[i];
        }
    }

    if (all_negative) {
        printf("%d\n", max_negative);
    } else {
        printf("%d\n", max_sum);
    }

    return 0;
}
