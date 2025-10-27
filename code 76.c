//Q76: Check if a matrix is symmetric.
/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
int main() {
    int n, m, i, j;
    int A[50][50];
    int isSymmetric = 1;
    printf ("Enter row and column of matrix:\n");
    scanf("%d %d", &n, &m);
     if (n != m) //check whether matrix is square
     {
        printf("False\n");
        return 0;
    }
    printf ("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            printf ("a[%d][%d] ",i,j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            if (A[i][j] != A[j][i]) 
            {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }
    if (isSymmetric)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}
