
// Input  5
//Output  A B C D E


#include<stdio.h>
void Display(int);
int main()
{
	int iValue=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}

void Display(int iNo)
{
	int iCnt=0;
	
	for (iCnt=65;iCnt<=iNo;iCnt++)
	{
		printf("%d",iCnt);
	}
	
}