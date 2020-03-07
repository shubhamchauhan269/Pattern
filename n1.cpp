#include<stdio.h>

int main()
{
	int n=7;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j>=1;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
