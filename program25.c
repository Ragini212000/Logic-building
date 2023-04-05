// Input  6
//Output  a b c d e f


#include<stdio.h>
void Display(int);
int main()
{
	int iValue1=0;
	printf("Enter the number\n");
	scanf("%d",&iValue1);
	
	Display(iValue1);
	
	return 0;
}

void Display(int iNo)
{
	int iCnt=0;
	char ch='a';
	
	for(iCnt=1,ch='a';iCnt<=iNo;iCnt++,ch++)
	{
		printf("%c\n",ch);
	}
}