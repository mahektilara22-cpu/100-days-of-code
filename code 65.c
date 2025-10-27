//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1
*/
#include<stdio.h>
int main(){
    int i,a[50],n,k,high,low,mid,f,index=-1;
    printf ("Enter the size of the array:\n");
    scanf ("%d",&n);
    printf ("Enter the elements in array\n");
    for(i=0;i<n;i++)
    {
    printf ("a[%d] ",i);
    scanf ("%d",&a[i]);
    }
    printf ("Enter the search elemnt:\n");
    scanf ("%d",&k);
    low=0;
    high=n-1;
    while (high>=low)
    {
        mid=(low+high)/2;
        if(a[mid]==k)
        {
        f=1;
        index=mid;
        break;
    }
    else  if (a[mid]>k)
    {
        high=mid-1;
    }
      else
    {
    low=mid+1;
    }
    }
    if (index!=-1)
    {
    printf ("%d found at index :%d\n",k,index);
    }
    else
    {
     printf ("-1\n");
    }
    return 0;
}
