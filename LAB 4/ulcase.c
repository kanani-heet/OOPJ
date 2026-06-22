// Convert a string into upper case and lower case string without using built-in function. 

#include<stdio.h>
void main()
{
	char s[100];
	int i;
	
	printf("please enter string:\n");
	gets(s);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>'a' && s[i]<'z')
		{
			s[i]=s[i]-32;	
		}
		else
		{
			s[i]=s[i]+32;	
		}
		
	}
	printf("update string:\n %s",s);
}
