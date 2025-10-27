//Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>
int main() {
    int num1, num2, lcm;
    scanf("%d %d", &num1, &num2);

    // Start checking from the maximum of the two numbers
    lcm = (num1 > num2) ? num1 : num2;

    // Keep increasing lcm until it is divisible by both
    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            printf("%d\n", lcm);
            break;
        }
        lcm++;
    }

    return 0;
}
