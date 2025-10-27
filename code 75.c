//Q75: Add two matrices.
/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
int main() 
{
  int i,j,r1,c1,r2,c2,a[50][50],b[50][50],sum[50][50];
  printf ("Enter the rows and columns for matrix 1:\n");
  scanf ("%d %d",&r1,&c1);
  printf ("Enter the elements for matrix 1:\n");
  for ( i=0 ; i<r1 ; i++ )
  {
      for ( j=0 ; j<c1 ; j++ )
      {
          printf ("a[%d][%d] ",i,j);
          scanf ("%d",&a[i][j]);
       }
  }
   printf ("Enter the rows and columns for matrix 2:\n");
  scanf ("%d %d",&r2,&c2);
  printf ("Enter the elements for matrix 1:\n");
  for ( i=0 ; i<r2 ; i++ )
  {
      for ( j=0 ; j<c2 ; j++ )
      {
          printf ("b[%d][%d] ",i,j);
          scanf ("%d",&b[i][j]);
       }
  }
  if (r1 != r2 || c1 != c2) //check if addition is possible
  {
        printf("Matrix addition not possible\n");
        return 0;
    }
    for ( i=0 ; i<r1 ; i++ )
  {
      for ( j=0 ; j<c1 ; j++ )
      {
          sum[i][j]=0;
      }
  }
  for ( i=0 ; i<r1 ; i++ )
  {
      for ( j=0 ; j<c2 ; j++ )
      {
          sum[i][j] = sum[i][j] + a[i][j] + b[i][j];
      }
  }
  printf ("The sum of matrices:\n");
  for ( i=0 ; i<r1 ; i++ )
  {
      for ( j=0 ; j<c2 ; j++ )
      { 
          printf ("%d ",sum[i][j]);
      }
     printf("\n");
  }
  return 0;
          
}
