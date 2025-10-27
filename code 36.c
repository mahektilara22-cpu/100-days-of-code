//Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>
int main() {
	int temp,num1,num2,hcf;
printf ("Enter two numbers:");
	scanf ("%d %d",&num1,&num2);
	int x = num1, y = num2;

    while (y != 0)
    {
     temp = y;
        y = x % y;
        x = temp;
    }

    hcf = x;
    printf("%d\n", hcf);
return 0;
}
