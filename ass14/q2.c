#include<stdio.h>
float simple_intrest(int,int, int);
int main()
{
	int x,y,z;
	float k;
	printf("enter principle");
	scanf("%d",&x);
	printf("enter rate");
	scanf("%d",&y);
	printf("enter time");
	scanf("%d",&z);
	k=simple_intrest(x,y,z);
	printf("SI is %f",k);
	return 0;	
}
float simple_intrest(int p, int r, int t)
{
	float si;
	si=p*r*t/100.0;
	return si;
}
