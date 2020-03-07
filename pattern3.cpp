#include<stdio.h>
void space(int n)
{
	for(int i=0;i<=n;i++)
	{
		printf(" ");
	}
}

int main()
{
	int a=65,n=9;
	char c;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			c=(char)a+j;
			printf("%c",c);
			printf(" ");
		}
		
		printf("\n");
		space(i);
	}
}
