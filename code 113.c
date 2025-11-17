// Write a program to take an integer array arr and an integer k as inputs.
// The task is to find the kth smallest element in the array.
// Print the kth smallest element as output.

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int val1 = *(int *)a;
    int val2 = *(int *)b;
    return val1 - val2;
}

int main() {
    int n, k;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k\n");
        return 1;
    }

    qsort(arr, n, sizeof(int), compare);

    printf("%d\n", arr[k - 1]);

    return 0;
}
