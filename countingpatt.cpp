#include<stdio.h>

int main()
{
	int n=10,c;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c=j*10+i;
			printf("%-4d",c);
			
		}
		printf("\n");
	}
}
