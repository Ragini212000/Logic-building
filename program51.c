#include<stdio.h>
#include<stdbool.h>

bool checkbit(int);

int main()
{
	int ivalue=0;
	bool bret= false;
	
	printf("Enter thr number");
	scanf("%d",&ivalue);
	
	bret=checkbit(ivalue);
	
	if(bret==true)
	{
		printf("21th bit is on");
	}
	else
	{
		printf("21th bit is off");
	}
	return 0;
}

bool checkbit(int iNo)
{
	int iret=0;
	int imask=0x00100000;  // 21 bit
	
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
	