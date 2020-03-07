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
	int n=4;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			printf("%d ",j);
			
		
		}
		printf("\n");
		if(i<n)
		{
		space(i);
		}
	}
	for(int i=4;i>=1;i--)
	{
			space(i-1);
		for(int j=i;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
		
	}
	
	
}
