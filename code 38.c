//Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>
int main() {
    int num, sum = 0, rem;
    scanf("%d", &num);

    while (num > 0) {
        rem = num % 10;   
        sum = sum + rem;  
        num = num / 10;   
    }

    printf("%d\n", sum);

    return 0;
}
