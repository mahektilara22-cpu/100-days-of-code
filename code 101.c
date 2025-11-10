// Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
// The elements in the sorted array might be repeated.
// You need to print the first and last occurrence of the target and print the index of first and last occurrence.
// Print -1, -1 if the target is not present. 

#include <stdio.h>

int findFirstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1; // look for earlier occurrence
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int findLastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            low = mid + 1; // look for later occurrence
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, target;
    printf("Enter size of the sorted array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d sorted integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter the target integer: ");
    scanf("%d", &target);

    int first = findFirstOccurrence(nums, n, target);
    int last = findLastOccurrence(nums, n, target);

    if (first == -1 || last == -1) {
        printf("-1, -1\n");
    } else {
        printf("First occurrence of %d is at index: %d\n", target, first);
        printf("Last occurrence of %d is at index: %d\n", target, last);
    }

    return 0;
}
