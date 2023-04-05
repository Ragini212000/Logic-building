#include<stdio.h>
int smallcount(char*);
int main()
{
char arr[20];
int iRet=0;

printf("Enter the name\n");
scanf("%[^\n^]s",arr);

iRet=smallcount(arr);

printf("small letters are :%d\n",iRet);

return 0;
}

int smallcount(char *str)
{
	int iCnt=0;
	
	while(*str !='\0')
	{
		if((*str>'a') && (*str<'z'))
		{
          iCnt++;
		}
     str++;
	}
	return iCnt;
}
		
	
