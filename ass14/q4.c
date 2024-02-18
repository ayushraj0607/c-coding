#include<stdio.h>
void n_natural_no(int);
int main()
{
	int x;
	printf("first n natural no");
	scanf("%d",&x);
	n_natural_no(x);
	return 0;
}
void n_natural_no(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
	}
	
}
