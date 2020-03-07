#include<stdio.h>


void space(int n)
{
	for(int i=0;i<=n;i++)
	{
		printf(" ");
	}
}

void pattern(int n)
{
	for(int i=0;i<n;i++)
	{
		space(n-i);
		for(int j=1;j<=2*i+1;j++)
		{
			if(j==1 || j==2*i+1 || j==i+1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		
		printf("\n");
	}
}



int main()
{
	int n=7;
	pattern(n);
	return 0;
}

