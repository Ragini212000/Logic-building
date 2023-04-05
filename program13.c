#include<stdio.h>
unsigned long int Factorial(int iValue)
{
	int i=0;
	unsigned long int isum=1;
	if(iValue<0)
	{
		iValue=-iValue;
	}

  for(i=1;i<=iValue;i++)
  {
    isum=isum*i;
    
  }
  return isum;
  
}
int main()
{
    int iNo;
	unsigned long int iRet=0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	iRet=Factorial(iNo);
	
	printf("factorial  is %d",iRet);
	
	return 0;
}