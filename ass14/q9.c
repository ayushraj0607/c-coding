#include<stdio.h>
int check_digit(int, int);
int main()
{
	int a,b,k;
	printf("enter numbers");
	scanf("%d%d",&a,&b);
	k=check_digit(a, b);
	printf("%c",k);
	return 0;
}
int check_digit(int x, int y)
{
	int z,c;
	while(x)
	{
		z=x%10;
		x=x/10;
		if(y==z)
		break;
	}
	 if(y==z)
	 {
	 c=printf("present");
	 return c;
	}
	 else 
	 {
	 c=printf("not present");
	 return c;
	}
	
}
