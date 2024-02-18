#include<stdio.h>
int factorial(int x);
int main()
{
	int k,n;
	printf("enter any number");
	scanf("%d",&n);
	k=factorial(n);
	printf("factorial is %d",k);
	
	return 0;
}
int factorial(int x)
{
	int i,fact=1;
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	return fact;
}
