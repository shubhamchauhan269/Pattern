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
	int n=9;
	for(int i=1;i<=n;i++)
	{
		space(n-i);
		
		for(int j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	for(int i=1;i<=n;i++)
	{
		space(i);
		
		for(int j=1;j<=n-i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
