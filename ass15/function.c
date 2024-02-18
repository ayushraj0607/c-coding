#include<stdio.h>
int check_prime(int);
int next_prime(int n);
//int printN(int n);
int main()
{
	int x,k;
	printf("enter number");
	scanf("%d",&x);
	//k=printN(x);
	//printf("%d\n",k);
	k=next_prime(x);
	printf("%d\n",k);
	k=check_prime(x);
    if(k==1)
	printf("%d is prime",x);
	else 
	printf("%d is not prime",x);
	return 0;
}
int check_prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		  return 0;
    }
		return 1;	
}

int next_prime(int y)
{
	int n;
	for(n=y+1; ;n++)
	{
		check_prime();
		return y;
	}
}

/*int next_prime(int n)
{
	while(!check_prime(++n))
	{
		check_prime(++n);
		return n;
	}
}
*/
/*int printN(int n)
{
	int x;
	for(x=2;x<n;x++)
	{
		check_prime(++n);
		return n;
	}
}*/

