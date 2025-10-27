//Q30: Write a program to reverse a given number.

#include <stdio.h>
int main ()
{
    int i,n,rev,d,x;
    scanf ("%d",&n);
    x=n;
    while (x>0)
    {
d=x%10;
rev=rev*10+d;
x=x/10;
    }
    printf ("Reverse of %d = %d",n,rev);
    return 0;
}
