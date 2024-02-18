#include<stdio.h>
void prime_no(int,int);
int main()
{
	int p,q;
	printf("enter two num");
	scanf("%d%d",&p,&q);
	prime_no(p,q);
	return 0;
}
void prime_no(int a,int b)
{
	int x,i;
	for(x=a;x<b;x++)
	{
		for(i=2;i<x;i++)
		{
			if
			(x%i==0)
			break;
		}
		if(x==i)
		printf("%d\n",x);
	}
}
