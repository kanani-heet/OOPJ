//WAP to generate Fibonacci series of N given number using method.
#include<stdio.h>
void main()
{
	int a=0,b=1,c,n,i;
	
	printf("enter the your number :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
}
