#include<stdio.h>

int main()
{
	int n=7;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=7;j++)
		{
			if(j==i)
			{
				printf("%d ",i);
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
		}
	}
