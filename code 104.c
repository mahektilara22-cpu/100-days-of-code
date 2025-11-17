// Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.
// Print the pivot integer x. If no such integer exists, print -1.
// Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // total sum of numbers from 1 to n
    int totalSum = n * (n + 1) / 2;

    // The pivot condition can be derived as x*x = totalSum
    int x = (int)sqrt(totalSum);

    if (x * x == totalSum) {
        printf("%d\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}
