//Q28: Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, i;
    long long product = 1;  
    int hasEven = 0;
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1;
    }

    if (hasEven)
        printf("%lld\n", product);
    else
        printf("No even numbers in range\n");

    return 0;
}
