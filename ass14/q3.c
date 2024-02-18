#include<stdio.h>
int even_odd(int );
int main()
{
	int a,k;
	printf("enter any number");
	scanf("%d",&a);
	k=even_odd(a);
	printf("%d",k);
	return 0;
}
int even_odd(int x)
{
	return (x%2)?1:0;
}
