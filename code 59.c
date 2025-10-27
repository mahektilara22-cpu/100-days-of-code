//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>
int main(){
    int i,a[50],even=0,odd=0,n;
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
        if (a[i]%2==0)
        {
            even++;
        }
    else
        {
            odd++;
        }
    }
    printf ("Even numbers present in given array: %d\n",even);
     printf ("Odd numbers present in given array: %d\n",odd);
     return 0;
}
