//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, temp, first, last, digits = 0, power = 1, middle, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;   // Get last digit

    // Count digits and find first digit
    while (temp >= 10) {
        temp /= 10;
        digits++;
        power *= 10;   // power = 10^(digits)
    }
    first = temp;      // First digit

    // If number has only one digit, no swap needed
    if (power == 1 && num < 10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    // Remove first and last digit part (middle digits)
    middle = (num % power) / 10;

    // Construct swapped number
    swapped = last * power + middle * 10 + first;

    printf("Swapped number: %d\n", swapped);

    return 0;
}
