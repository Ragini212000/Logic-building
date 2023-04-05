#include<stdio.h>
void Displaybinary(int);
int main()
{
	int ivalue=0;
	
	printf("Enter the number\n");
	scanf("%d",&ivalue);
	
	Displaybinary(ivalue):
	
	return 0;
}

void Displaybinary(int iNo)
{
	int digit=0;
	
	while(iNo!=0)
	{
		digit=iNo%2;
		printf("%d",digit);
		iNo=iNo/2;
	}
}
