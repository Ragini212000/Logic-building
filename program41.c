#include<stdio.h>
 int Addition(int*);
int main()
{
	int Arr[5];
	int iRet=0,iCnt=0;
	printf("Enter numbers");
	for (iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
    iRet=Addition(Arr);
	
	printf("Addition is : %d\n",iRet);
	return 0;
}
int Addition(int Brr[])
{
	int iCnt=0,iSum=0;
	for (iCnt=0;iCnt<5;iCnt++)
    {
      iSum=iSum+Brr[iCnt];
	}
   return iSum;
}   




/*int Addition(int *Brr,int iSize)
{
	int iCnt=0;iSum=0;
	for (iCnt=0;iCnt<5;iCnt++)
	{
		iSum=iSum+(*Brr);
		Brr++;
	}
	return iSum;
}*/
	

	