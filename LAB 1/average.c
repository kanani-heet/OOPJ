// Calculate average of three numbers.
#include<stdio.h>
void main()
{
	int a,b,c;
	float avg;
	
	printf("enter a");
	scanf("%d",&a);
	
	printf("enter b");
	scanf("%d",&b);
	
	printf("enter c");
	scanf("%d",&c);
	
	avg=(a+b+c)/3;
	
	printf("Ans = %f",avg);
}
