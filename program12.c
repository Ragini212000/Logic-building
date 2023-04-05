#include<stdio.h>
int Addition(int iValue)
{
	int i=0,isum=0;
	if(iValue<0)
	{
		iValue=-iValue;
	}

  for(i=1;i<=iValue;i++)
  {
    isum=isum+i;
    
  }
  return isum;
  
}
int main()
{
    int iNo,iRet=0;
	printf("Enter number\n");
	scanf("%d",&iNo);
	iRet=Addition(iNo);
	
	printf("Addition is %d",iRet);
	
	return 0;
}