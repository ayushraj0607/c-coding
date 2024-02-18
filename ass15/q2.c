#include<stdio.h>
int lcm(int, int);
int main()
{
	int x,y,k;
	printf("enter two num");
	scanf("%d%d",&x,&y);
	k=hcf(x,y);
	printf("HCF is %d",k);
	return 0;
}
int hcf(int a, int b)
{
	int h;
	for(h=a<b?a:b;h>=1;h--)
	{
		if(a%h==0&&b%h==0)
		return h;
	}
}
