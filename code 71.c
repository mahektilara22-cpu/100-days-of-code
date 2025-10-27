// Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

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
     printf("The matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]); 
        }
        printf("\n"); 
    }
     return 0;
}
