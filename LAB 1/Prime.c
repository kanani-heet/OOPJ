//WAP to display all the prime numbers beween the given 2 numbers.

#include<stdio.h>
void main()
{
	int i,j,a,b;
	
	printf("enter a and b : \n");
	scanf("%d %d",&a, &b);	
	printf("prime number : ");
	int flag=1;
		for(i = a;i <= b;i++)
	{	
		for ( j = 2 ; j <i ; j++)
		{
			if(i % j == 0)
			{
				flag = 0;
				break;
			}
			
			}
			if( flag == 1)
			{
				printf("%d ",i);
			}	
			
	}
}
