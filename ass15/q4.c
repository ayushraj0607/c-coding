#include<stdio.h>
void next_prime(int x);
int main()
{
	int a;
	printf("enter any num");
	scanf("%d",&a);
	next_prime(a);
	return 0;
}
void next_prime(int x)
{
	int i,n;
	for(n=x+1; ;n++)
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			break;
		}
		if(i==n)
		{
		printf("%d is next prime no",n);
		break;
	}
		
	}
}
