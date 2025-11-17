// Write a program to take an integer array as input.
// Only one element will be repeated.
// Print the repeated element.
// Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Since only one element is repeated, use the negation marking technique
    // Iterate over the array and mark visited indices by negating the value at that index
    // When an index is already negative, it indicates the repeated element

    int repeated = -1;
    for (int i = 0; i < n; i++) {
        int val = arr[i];
        if (val < 0) val = -val;  // get absolute value

        if (arr[val] < 0) {
            repeated = val;
            break;
        } else {
            arr[val] = -arr[val];
        }
    }

    printf("%d\n", repeated);

    return 0;
}
