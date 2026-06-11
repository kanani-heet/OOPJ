//Calculate simple interest. (principal*roi*time period)/100.
#include<stdio.h>
void main()
{
	float principal,roi,time,si;
	
	printf("enter the your principal");
	scanf("%f",&principal);
	
	printf("enter the your roi");
	scanf("%f",&roi);
	
	printf("enter the your time");
	scanf("%f",&time);
	
	si=(principal*roi*time)/100;
	
	printf("your simple interest %f",si);
}
