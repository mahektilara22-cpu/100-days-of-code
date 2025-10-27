//Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main() {
    long  binary, onesComplement = 0;
    int place = 1, digit;
    // Input binary number as integer
    printf("Enter a binary number: ");
    scanf("%ld", &binary);
    // Process each digit
    while (binary != 0) {
        digit = binary % 10;       // extract last digit
        if (digit == 0)
            onesComplement += 1 * place;   // flip 0 → 1
        else
            onesComplement += 0 * place;   // flip 1 → 0
        binary /= 10;   // move to next digit
        place *= 10;    // shift place value
    }
    printf("1's Complement: %ld\n", onesComplement);

    return 0;
}

