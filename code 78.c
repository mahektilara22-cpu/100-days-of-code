//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main() {
    int n, m, i, j;
    int A[50][50];
     int sum = 0;
    printf ("Enter row and column of matrix:\n");
    scanf("%d %d", &n, &m);
    printf ("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            printf ("a[%d][%d] ",i,j);
            scanf("%d", &A[i][j]);
        }
    }
     // Only square matrices have well-defined main diagonals
    if (n != m) {
        printf("False\n");
        return 0;
    }
    for (int i = 0; i < n; i++) 
    {
     sum = sum + A[i][i];
    }
    printf ("Sum of diagonal elements is : %d",sum);
    return 0;
}
