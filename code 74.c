// Q74: Find the transpose of a matrix.
/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6
*/
#include <stdio.h>
int main() 
{ 
    int i,j,m,n,transpose[100][100],a[100][100];
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
        for(j=0;j<n;j++)
        {
        transpose[j][i] = a[i][j];
        }
    }
     printf ("Transpose of matrix :\n"); 
     for (i=0;i<n;i++)
    {
       for(j=0;j<m;j++)
        {  
   printf ("%d ",transpose[i][j]);
    }
    printf ("\n");
    }
    return 0;
}
