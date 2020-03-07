#include<stdio.h>

void sidet(int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d",n);
	}
}

int main()
{
	int n=7;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			printf("1");
		}
		sidet(i);
		printf("\n");
	}
}
			
