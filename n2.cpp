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
	for(int i=n;i>=1;i--)
	{
		space(n-i);
		for(int j=i;j>=1;j--)
		{
			printf("* ");
		}
		
		printf("\n");
	}
}
