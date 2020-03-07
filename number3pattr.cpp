#include<stdio.h>

int main()
{
	int n=5,k=0,c;
	for(int i=1;i<=5;i++)
	{
		k=1;
		for(int j=1;j<=n;j++)
		{
			printf("%-3d",i*k);
			k++;
		}
		printf("\n");
	}
}
