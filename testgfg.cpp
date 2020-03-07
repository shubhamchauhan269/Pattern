#include<stdio.h>

int main()
{
	 int n=4;
	 for(int i=4;i>=1;i--)
	 {
	 	for(int j=4;j>=1;j--)
	 	{
	 		printf("%d",i>=j?i:j);
	 		for(int k=j;k<4;k++)
	 		{
	 			printf("%dp",i>=j?i:j);
	 		}
	 	}
	 	
	 		
	 	printf("4");
	 	printf("\n");
	 }
}
