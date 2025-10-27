//Q42: Write a program to check if a number is a perfect number.
#include <stdio.h>
int main(){
    int num,i,x,sum=0;
    printf ("Enter a number:");
    scanf ("%d",&num);
    x=num;
    for (i=1;i<x;i++)
    {
        if (x%i==0)
        {
           sum=sum+i; 
        }
    }
      if (sum==num)
      {
          printf("Perfect Number\n");
      }
      else
      {
          printf("Not a perfect number\n");
      }
      
    
    return 0;
}
