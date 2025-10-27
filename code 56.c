//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include<stdio.h>
int main()
{
    int i,a[50],n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements in array\n");
    for (i=0;i<n;i++)
{
    printf("Enter the value of a[%d] ",i);
    scanf("%d",&a[i]);
}
    for (i=0;i<n;i++)
{
    printf("%d ",a[i]); 
}
    return 0;
}
