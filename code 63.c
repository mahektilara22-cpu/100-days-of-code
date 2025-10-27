//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include<stdio.h>
int main()
{
    int n1,n2,a[50],b[50],i,c[100],n;
    printf ("Enter the size of array 1\n");
    scanf ("%d",&n1);
    printf ("Enter the elements in array 1\n");
    for(i=0;i<n1;i++)
    {
        printf ("a[%d] ",i);
        scanf ("%d",&a[i]);
        c[i]=a[i]; //Copy array 1 to array c
    }
    printf ("Enter the size of array 2\n");
    scanf ("%d",&n2);
    printf ("Enter the elements in array 2\n");
    for(i=0;i<n2;i++)
    {
        printf ("b[%d] ",i);
        scanf ("%d",&b[i]);
        c[n1+i]=b[i]; //Copy array 2 to array c after array1
    }
    n=n1+n2;
    printf ("Merged array:\n");
    for (i=0;i<n;i++)
    {
    printf ("%d ",c[i]);
}
return 0;
}
