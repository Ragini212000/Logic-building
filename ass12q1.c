#include<stdio.h>
void Display(int,int);
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter the number of rows and columns\n");
	scanf("%d%d",&iValue1,&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}

void Display(int irow,int icol)
{
	for (int i=1;i<=irow;i++)
	{
		for(int j=1;j<=icol;j++)
		{
			if(i>=j)
			{
				printf("*");
			}
			else{
				printf("#");
			}
		}
		printf("\n");
	}
}