//Count occurrence of a given character in a string.
#include<stdio.h>

void main()
{
	char str[500],ch;
	int i,count=0;
	
	printf("please enter string:\n");
	gets(str);
	
	printf("enter charcter:\n");
	scanf(" %c",&ch);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			count++;
		}
	}
	
	printf("occurrence charcter = %d",count);
	
}
