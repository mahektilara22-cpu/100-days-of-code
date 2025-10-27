//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>
int main(){
    int a[50],n,i,Max,Min;
    printf ("Enter the size of the array\n");
    scanf ("%d",&n);
    printf ("Enter the elements in array\n");
    for (i=0;i<n;i++)
    {
        printf ("a[%d] ",i);
        scanf ("%d",&a[i]);
    }
    Max = a[0];
    Min = a[0];
    for (i=1;i<n;i++)
    {
        if (a[i]>Max)
        {
            Max = a[i];
        }
        if (a[i]<Min)
        {
            Min = a[i];
        }
    }
    printf ("Maximum number in array : %d\n",Max);
    printf ("Minimum number in array : %d\n",Min);
}
