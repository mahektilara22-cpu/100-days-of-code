//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main() {
	 float F,C;
     printf ("Enter temperature in celsius :\n");
    scanf ("%f", &C);
    F = (C * (9.0/5.0)) + 32;
    printf ("Temperature in fahrenheit : %.2f\n",F);

    return 0;
}
