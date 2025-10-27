//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
int main() {
    int i,num;
    double sum=0.0;
    printf("Enter a number:");
    scanf ("%d",&num);
    if (num <= 0) {
        printf("Sum of the series : 0.0\n");
        return 0;
    }
    sum=1.0;
    for (i=2;i<=num;i++)
    {
        sum=sum+((double)((2*i)-1)/(2*i));
    }
    printf ("Sum of the series : %.1f", sum);
    return 0;
}
