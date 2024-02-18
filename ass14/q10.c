#include<stdio.h>
int check_digit(int, int);
int main()
{
	int a,b,k;
	printf("enter numbers");
	scanf("%d%d",&a,&b);
	k=check_digit(a, b);
	printf("%d",k);
	return 0;
}
int check_digit(int x, int y)
{
	int z;
	while(1)
	{
		z=x%10;
		x=x/10;
		return (y==z)?printf("present"):printf("not present");
	}
	 
}
