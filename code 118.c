// Write a program to take an input array of size n.
// The array should contain all the integers between 0 to n except for one.
// Print that missing number.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers (numbers between 0 and %d, with one missing):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate expected sum of numbers from 0 to n
    int totalSum = n * (n + 1) / 2;

    // Calculate sum of given elements
    int arrSum = 0;
    for (int i = 0; i < n; i++) {
        arrSum += arr[i];
    }

    // Missing number is difference between totalSum and arrSum
    int missingNumber = totalSum - arrSum;
    printf("%d\n", missingNumber);

    return 0;
}
