// Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it.
// This element is called the ceil of x.
// If such an element does not exist, print -1.
// Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            res = mid;      // potential ceil found
            high = mid - 1; // look for a smaller index with arr[mid] >= x
        } else {
            low = mid + 1;
        }
    }
    return res;
}

int main() {
    int n, x;
    printf("Enter size of the sorted array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the integer x: ");
    scanf("%d", &x);

    int ceilIndex = findCeil(arr, n, x);
    printf("%d\n", ceilIndex);

    return 0;
}
