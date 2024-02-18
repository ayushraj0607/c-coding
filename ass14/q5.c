#include<stdio.h>
void n_odd_natural_no(int);
int main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	n_odd_natural_no(n);
	
	return 0;
}
void n_odd_natural_no(int x)
{
	int i;
	for(i=1;i<=x;i++)
	{
		printf("%d",2*i-1);
	}
}
