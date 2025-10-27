//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/



#include <stdio.h>
int main() {
        int a[50],n,i,sum=0;
        printf ("Enter the size of the array\n");
        scanf ("%d",&n);
        printf ("Enter the elements in array\n");
        for (i=0;i<n;i++)
        {
            printf ("a[%d] ",i);
            scanf ("%d",&a[i]);
        }
        for (i=0;i<n;i++)
        {
            sum = sum + a[i];
        }
        printf ("The sum of array elements is : %d",sum);
        return 0;
}
