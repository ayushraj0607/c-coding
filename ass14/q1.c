#include<stdio.h>
float area(int);
int main()
{
	int x;
	float k;
	printf("enter any num");
	scanf("%d",&x);
	k=area(x);
	printf("%f is area",k);
	return 0;
}
float area(int a)
{
	float ar;
	ar=3.14*a*a;
	return ar;
}

