#include<stdio.h>
#include<stdbool.h>

bool checkcapital(char c)
{
	if((c>='A') && (c<='Z'))
	{
		return true;
	}
	else
	{
	return false;
	}
}


int main()
{
	char ch='\0';
	bool bret=false;
	
	printf("enter the character\n");
	scanf("%c",&ch);
	
	bret=checkcapital(ch);
	
	if(bret==true)
	{
		printf("character is capital");
	}
	if(bret==false)
	{
		printf("character is not capital");
	}
	return 0;
}