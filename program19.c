#include<stdio.h>
void DisplayTable(int);
int main()
{
  int iValue=0;
  printf("Enter the number\n");
  scanf("%d",&iValue);
  
  DisplayTable(iValue);
  
  return 0;
}
void DisplayTable(int iNo)
{
	int iCnt=0,iMul=1;
	if(iNo==0)
	{
	   return;
	}
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=10;iCnt++)
	{
		iMul=iNo*iCnt;
	    printf("%d\n",iMul);

	}
}
