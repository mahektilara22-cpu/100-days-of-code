//Q29: Write a program to calculate the factorial of a number.
#include <stdio.h>
int main ()
{
    int i,n,fact=1;
    scanf ("%d",&n);
    for (i=n;i>=1;i--)
    {
        fact = fact*i;
    }
    printf ("Factorial of %d = %d",n,fact);
    return 0;
}
