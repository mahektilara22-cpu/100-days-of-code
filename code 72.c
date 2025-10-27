// Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>
int main() {
    int i,j,m,n;
    printf ("Enter the row and column for array:\n");
    scanf ("%d %d",&m,&n);
    int a[m][n];
    printf ("Enter the elements in array:\n");
    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf ("%d",&a[i][j]);
        }
    }
     int sum=0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
        }
    }
    printf ("The sum of all elements in a matrix is: %d\n",sum);
     return 0;
}
