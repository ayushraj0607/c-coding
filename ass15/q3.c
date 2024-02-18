#include<stdio.h>
int prime(int);
int main()
{
	int x,k;
	printf("enter any num");
	scanf("%d",&x);
	k=prime(x);
	if(k==1)
	printf("prime  no");
	else printf("not prime no");
	return 0;
}
int prime(int a)
{
int i,b;
for(i=2;i<=a-1;i++)
{
	if(a%i==0)
	break;
}
if(i==a)
return 1;
else 
	return 0;
}
