//Read two string from user and merge second string into first string without using built-in function.

#include<stdio.h>

void main()
{
	char str1[50],str2[50];
	int i,j;
	
	printf("please enter first string:\n");
	gets(str1);
	
	printf("please enter second string:\n");
	gets(str2);

	for(i=0;str1[i]!='\0';i++)
	{
		
	}
	str1[i]=' ';
	i++;
	for(j=0;str2[j]!='\0';j++)
	{
		str1[i]=str2[j];
		i++;
	}
	str1[i]='\0';
	printf("%s",str1);

}

