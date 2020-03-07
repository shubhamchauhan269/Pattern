#include<stdio.h>
int def(int l,int temp)
{
	if(l==temp)
	return 0;
	else
	l=l+5;
	printf("%d ",l);
	def(l,temp);
}

int sub(int p,int temp)
{
	if(p>0)
	{
		printf("%d ",p);
		p=p-5;
		return sub(p,temp);
	}
	else
	{
		printf("%d ",p);
		return def(p,temp);
	}
}



int main()
{
	int p,temp;
	scanf("%d",&p);
	temp=p;
	sub(p,temp);
	return 0;
}
