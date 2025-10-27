/*
 Perform diagonal traversal of a matrix
*/

#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int mat[20][20];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Diagonal traversal of the matrix:\n");

    // Traverse diagonals that start from each row of first column
    for (int startRow = 0; startRow < n; startRow++) {
        int i = startRow, j = 0;
        while (i >= 0 && j < m) {
            printf("%d ", mat[i][j]);
            i--;
            j++;
        }
    }

    // Traverse diagonals that start from each column of last row except first column
    for (int startCol = 1; startCol < m; startCol++) {
        int i = n - 1, j = startCol;
        while (i >= 0 && j < m) {
            printf("%d ", mat[i][j]);
            i--;
            j++;
        }
    }

    printf("\n");
    return 0;
}
