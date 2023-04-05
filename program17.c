#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrome(int iNo)
{
	int iRev=0,iDigit=0,Temp=0;
	Temp=iNo;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=((iRev*10)+iDigit);
		iNo=iNo/10;
	}
    if(iRev==Temp)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int iValue=0,iRet=0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet=CheckPalindrome(iValue);
	if(iRet==1)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
		}

	return 0;
	
	
}