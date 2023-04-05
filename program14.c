#include<stdio.h>
void DisplayFactor(int iValue)
{
	int iCnt=0;
	for(iCnt=1;iCnt<iValue;iCnt++)
	{
		if(iValue%iCnt==0)
		{
			printf("%d\n",iCnt);
		}
	}
	
}
int main()
{
    int iNo;
	printf("Enter number\n");
	scanf("%d",&iNo);
	DisplayFactor(iNo);
	
	return 0;
}