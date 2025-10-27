//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int i,a[50],n,pos,k,b[50];
    printf ("Enter the size of the array:\n");
    scanf ("%d",&n);
    printf ("Enter the elements in array:\n");
    for (i=0;i<n;i++)
    {
        printf ("a[%d] ",i);
        scanf ("%d",&a[i]);
    }
    printf ("Enter the index at which number to  be inserted:\n");
    scanf ("%d",&pos);
    printf ("Enter the number that insert in array:\n");
    scanf ("%d",&k);
    for (int i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = k;
    n++; 
    printf ("After insertion:\n");
         for (i=0;i<n;i++)
    {
         printf("%d ",a[i]);
    }
    return 0;
}
