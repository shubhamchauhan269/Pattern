#include<stdio.h>

int main()
{
	int n=59,l=0;
	for(int i=1;l<n;i++)
	{
		for(int j=1;j<=i && l<n;j++)
		{
			l++;
			printf("%-3d",l);
		}
		printf("\n");
	}
}
