#include<stdio.h>
#include<stdbool.h>

bool checkbit(int,int);

int main()
{
	int ivalue=0,ibit=0;
	bool bret= false;
	
	printf("Enter the number");
	scanf("%d",&ivalue);
	
	printf("Enter the position");
	scanf("%d",&ibit); 
	
	bret=checkbit(ivalue,ibit);
	
	if(bret==true)
	{
		printf(" %dth bit is on",ibit);
	}
	else
	{
		printf("%dth bit is off",ibit);
	}
	return 0;
}

bool checkbit(int iNo,int ipos)
{
	int iret=0;
	int imask=0x00000001 ;
	
	if(ipos>1 || ipos<32)
	{
		return false;
	}

    imask=imask<<(ipos-1);	
	
	iret=iNo&imask;
	
	if(iret==imask)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
	

