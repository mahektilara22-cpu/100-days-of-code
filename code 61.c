//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main(){
    int a[50],i,n,k,f=0;
    printf ("Enter the size of the array:\n");
    scanf ("%d",&n);
    
    printf ("Enter the elements in array:\n");
    for (i=0;i<n;i++)
    {
        printf ("a[%d] ",i);
        scanf ("%d",&a[i]);
    }
    printf ("Enter the search element:\n");
    scanf ("%d",&k);
    for (i=0;i<n;i++)
    {
    if (a[i]==k)
    {
        f=1;
        break;
    }
    }
    if (f==1)
    {
        printf ("%d is found at index : %d\n",k,i);
    }
    return 0;
}
