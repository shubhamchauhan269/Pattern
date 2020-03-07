#include<stdio.h>

int main()
{
	int n=9,k;
	for(int i=n;i>=1;i--)
	{
		k=i;
		for(int j=1;j<=n;j++)
		{
			printf("%d",k<=n?k:n);
			k++;
		}
		printf("\n");
	}
}
