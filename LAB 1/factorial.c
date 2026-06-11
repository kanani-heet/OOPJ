// WAP to find factorial of the given number.
#include<stdio.h>
void main()
{
	int i,n,fact=1;
	
	printf("please enter number ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact = fact*i;
	}
	
	printf("factorial of a number %d",fact);
}
