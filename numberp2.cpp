#include<stdio.h>
#include<math.h>
int main()
{
	int n=5;
	for(int i=0;i<=n;i++)
	{
		for(int j=-4;j<n;j++)
		{
			if(abs(j)<i)
			{
				printf(" ");
			}
			else
			{
				printf("%d",abs(j)+1);
			}
		}
		printf("\n");
	}
}
