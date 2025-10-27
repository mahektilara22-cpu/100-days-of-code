//Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;
    scanf("%d", &num);
    originalNum = num;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    if ((int)result == originalNum)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
