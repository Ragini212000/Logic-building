#include<stdio.h>
void Display(int iValue)
{
	int i=0;

  for(i=iValue;i>=1;i--)
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