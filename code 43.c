//Q43: Write a program to check if a number is a strong number.

#include <stdio.h>
int main() {
	int num,fact=1,sum=0,d,x;
    printf("Enter a number:");
    scanf("%d",&num);
    x=num;
    while(x>0)
    {
        d=x%10;
        fact=1;
        for (int i=1;i<=d;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        x=x/10;
    }
    if (sum==num){
        printf("Strong number");
    }
    else {
        printf ("Not a strong number");
    }    
}
