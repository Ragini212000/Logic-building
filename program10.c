#include<stdio.h>
void Display(int iValue)
{
	int i=0;
	if(iValue==0)
	{
		printf("Your entered value is 0");
		return;
	}
	if(iValue<0)
	{
		iValue=-iValue;
	}
  
  for(i=1;i<=iValue;i++)
  {
   printf("%d\n",i);
  }
  
}
int main()
{
    int iNo;
	printf("Enter number\n");
	scanf("%d",&iNo);
	Display(iNo);
	
	return 0;
}

