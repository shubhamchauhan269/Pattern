#include<stdio.h>

int main()
{
	int n=3;
	for(int i=n;i>=1;i--)
	{
		for(int j=n;j>=1;j--)
		{
			for(int k=1;k<=i;k++)
			{
				printf("%d ",j);
			}
		}
		printf("$");
	}
}
			
