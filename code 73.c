// Q73: Find the sum of each row of a matrix and store it in an array.
/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
*/
#include <stdio.h>
int main() 
{ 
    int i,j,m,n,sumofrows[50],a[50][50];
    printf ("Enter the row and column for array:\n");
    scanf ("%d %d",&m,&n);
    printf ("Enter the elements in array:\n");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf ("%d",&a[i][j]);
        }
    }
    for (i=0;i<m;i++)
    {
        sumofrows[i] = 0;
        for(j=0;j<n;j++)
        {
        sumofrows[i] = sumofrows[i] + a[i][j];
        }
    }
     printf ("Sum of rows of matrix :\n"); 
     for (i=0;i<m;i++)
    {
   printf ("%d ",sumofrows[i]);
    }
     
    return 0;
}
