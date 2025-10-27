//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main() {
    int year;

    // Input year
    scanf("%d", &year);

    // Check leap year conditions
    if (year % 400 == 0) {
        printf("Leap year\n");
    } 
    else if (year % 100 == 0) {
        printf("Not a leap year\n");
    } 
    else if (year % 4 == 0) {
        printf("Leap year\n");
    } 
    else {
        printf("Not a leap year\n");
    }
    return 0;
}
