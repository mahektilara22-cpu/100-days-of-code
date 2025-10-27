//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

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
    printf ("Enter position:\n");
    scanf ("%d",&pos);
    for (int i = 0; i <n; i++)
    {
     if (i==pos)
     {
         continue;
     }
     else
     {   
         printf("%d ",a[i]); //Output 5after deletion
     }
    }
    return 0;
}
