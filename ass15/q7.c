#include<stdio.h>
void fibonacci();
int main()
{
	fibonacci();
	return 0;
}
void fibonacci()
{
	int n,a=-1,b=1,c,i;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	c=a+b;
	printf("fobonacci series is %d\n",c);
	a=b;
	b=c;
}
}
