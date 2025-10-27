//Q35: Write a program to print all factors of a given number.
#include <stdio.h>
int main() {
	int i,num;
printf ("Enter a number:");
	scanf ("%d",&num);
	for (i=1;i<=num;i++)
	{
	  if (num%i==0)
	  printf ("%d ",i);
	}
return 0;
}
