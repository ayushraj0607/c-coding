#include<stdio.h>
int combination(int,int);
int main()
{
	int a,b,k;
	printf("enter a,b\n");
	scanf("%d%d",&a,&b);
	k=permutation(a, b);
	printf("permutation is %d",k);
	return 0;
}
int permutation(int n,int r)
{
	int i,factn=1,fac,fact=1,final;
	for(i=1;i<=n;i++)
	{
		factn=factn*i;
	}
	fac=n-r;
	for(i=1;i<=fac;i++)
	{
		fact=fact*i;
	}
	final=factn/fact;
	return final;
	
}
