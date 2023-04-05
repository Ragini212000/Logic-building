#include<stdio.h>
typedef unsigned int UINT;
UINT Strlenx(char*);
int main()
{
	char arr[20];
	int iRet=0;
	
	printf("Enter thr name\n");
	scanf("%[^\n^]s",arr);
	
	iRet=Strlenx(arr);
	
	printf("length of string is:%u\n",iRet);
	return 0;
}
UINT Strlenx(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return 0;
	}
	
	while(*str !='\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

	