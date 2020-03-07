#include<stdio.h>

void square(int n)
{
	int p=0;
	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=n-1;j++)
		{
			if(i==1 || j==1 || i==n-1 || j==n-1)
			{
				printf("%d ",p);
			}
			else
			{
				printf("  ");
				
			}
		}
		printf("\n");

	}


}

void pattern(int n)
{
	square(2*n);
}

int main()
{
	int n=4;
	for(int i=n;i>=1;i--)
	{
		pattern(i);
	}
	return 0;
}
	
