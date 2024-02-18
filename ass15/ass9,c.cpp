#include<stdio.h>
void sum_natural_no();
void sum_even_natural_no();
void sum_odd_natural_no();
void sum_square_no();
void sum_cube_no();
void factorial_no();
int main()
{
 factorial_no();
	return 0;
}
void sum_natural_no()
{
	int n,i,sum=0;
	printf("enter num");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+i;
	printf("sum is %d ",sum);
}
void sum_even_natural_no()
{
		int n,i,sum=0;
	printf("enter num");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+2*i;
	printf("sum is %d ",sum);
}
void sum_odd_natural_no()
{
	int n,i,sum=0;
	printf("enter num");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+2*i-1;
	printf("sum is %d ",sum);
}
void sum_square_no()
{
		int n,i,sum=0;
	printf("enter num");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+i*i;
	printf("sum is %d ",sum);
}
void sum_cube_no()
{
		int n,i,sum=0;
	printf("enter num");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	sum=sum+i*i*i;
	printf("sum is %d ",sum);
}
void factorial_no()
{
	int n,i,fact=1;
	printf("enter num");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact=fact*i;
	printf("factorial is %d ",fact);
}

