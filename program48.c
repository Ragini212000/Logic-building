#include<stdio.h>
#include<stdbool.h>

bool checkpalindrome(char*);

int main()
{
	char arr[20];
	bool bret=false;
	printf("enter the string\n");
	scanf("%[^'\n']s",arr);
	
	bret=checkpalindrome(arr);
	if(bret==true)
	{
		printf("it is palindrome\n");
	}
	else
	{
		printf("it is not palindrome\n");
	}
	return 0;
}
bool checkpalindrome(char *str)
{
	char *start= NULL;
	char *end=NULL;
	start=str;
	end=str;
	
	while(*end !='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		if(*start != *end)
		{
			break;
		}
		start++;
		end--;
	}
	if(start<end)
	{
		return false;
	}
	else
	{
		return true;
	}
}
	
	
	
	
	