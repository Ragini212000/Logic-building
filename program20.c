#include<stdio.h>
int Power(int,int);
int main()
{
  int iValue1=0,iValue2=0,iRet=0;
  printf("Enter two number\n");
  scanf("%d%d",&iValue1,&iValue2);
  
  iRet =Power(iValue1,iValue2);
  printf("%d",iRet);
  
  return 0;
}
y

int Power(int iNo1,int iNo2)
{
	int iCnt=0,iPow=1;
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		iPow=iPow*iNo1;
	}
	return iPow;
}
