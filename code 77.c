//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
int main() {
    int n, m, i, j;
    int A[50][50];
     int isDistinct = 1;
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
        for (int j = i + 1; j < n; j++) 
        {
            if (A[i][i] == A[j][j]) 
            {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) 
        break;
    }

    if (isDistinct)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
