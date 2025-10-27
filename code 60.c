//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main(){
    int i,a[50],pos=0,neg=0,zero=0,n;
    printf ("Enter the size of the array\n");
    scanf ("%d",&n);
    printf ("Enter the elements in array:\n");
    for (i=0;i<n;i++)
    {
        printf ("a[%d] ",i);
        scanf ("%d",&a[i]);
    }
for (i=0;i<n;i++)
    {
        if (a[i]>0)
        {
            pos++;
        }
    else if(a[i]<0) 
        {
            neg++;
        }
        else
        {
            zero++;
        }
        
    }
    printf ("Positive numbers present in given array: %d\n",pos);
     printf ("Negative numbers present in given array: %d\n",neg);
     printf ("Zeroes present in given array: %d\n",zero);
     return 0;
}
