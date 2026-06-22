// Replace a character in given string. 

#include<stdio.h>
void main()
{
	char s[100],replace,newchar;
	int i;
	
	printf("please enter string:\n");
	gets(s);
	
	printf("please enter replce charcter: ");
	scanf(" %c",&replace);
	
	printf("please enter new charcter: ");
	scanf(" %c",&newchar);
	
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==replace)
		{
			s[i]=newchar;
		}
	}
	printf("that is a after change string :");
	printf("%s",s);
}
