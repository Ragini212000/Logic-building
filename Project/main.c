///////////////////////////////////
//
//Accept two numbers from user and perform addition.
//
///////////////////////////////////

#include"header.h"      //user defined header file inclusion
//Entry point function

int main()
{
	
	int ivalue1=0,ivalue2=0,iRet=0;  // Local variable
	
	printf("Enter first number\n");
	scanf("%d",&ivalue1);
	
	printf("Enter second number\n"); // accepting input
	scanf("%d",&ivalue2);
	
	iRet=Addition(ivalue1,ivalue2);  //function call
	
	printf("Addition is :%d\n",iRet);
	
	
	return 0;  //return success to os
}