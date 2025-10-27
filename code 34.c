//Q34: Write a program to check if a number is prime.
#include <stdio.h>
int main() 
{
    int num, i, isPrime = 1;
    // Input number
    scanf("%d", &num);

    if (num <= 1) {
        // 0 and 1 are not prime numbers
        isPrime = 0;
    } else {
        // Check divisibility from 2 to sqrt(num)
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // not prime
                break;
            }
        }
    }

    // Print result
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}
