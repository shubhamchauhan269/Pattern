#include<stdio.h>
void space(int n)
{
	for(int i=0;i<n;i++)
	{
		printf(" ");
	}
}


int main()
{
	int n=7;
	for(int i=1;i<=7;i++)
	{
		space(n-i);
		for(int j=1;j<=i;j++)
		{
			if(i%2==1)
			{
				printf("* ");
			}
			else
			{
				printf("%d ",j);
			}
		}
		printf("\n");
		}
}
