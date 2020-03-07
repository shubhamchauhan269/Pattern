#include<stdio.h>
#include<math.h>


int main()
{
	int n=4,k;
	k=n;
	for(int i=-4;i<=n;i++)
	{
		for(int j=abs(i)+1;j<n;j++)
		{
			printf("%d",j);

		}
		for(int j=n;j>abs(i);j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
