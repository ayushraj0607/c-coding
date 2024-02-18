#include<stdio.h>
void prime_no(int);
int main()
{
	int q;
	printf("enter num");
	scanf("%d",&q);
	prime_no(q);
	return 0;
}
void prime_no(int n)
{
	int x,a=2,b,i;
	for(x=a;x<b;x++)
	{
		for(i=2;i<=n;i++)
		{
			if
			(x%i==0)
			break;
		}
		if(x==i)
		printf("%d\n",x);
	}
}
