#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,k,c;
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiply\n");
	printf("4.Divide\n");
	printf("5.Exit\n\n\n");
	printf("Select any");
	scanf("%d",&k);
	while(5)
	{
	switch(k)
	{
		case 1:
			printf("enter two number");
			scanf("%d%d",&a,&b);
			c=a+b;
			printf("sum is %d\n",c);
			break;
		case 2:
			printf("enter two number");
			scanf("%d%d",&a,&b);
			c=a-b;
			printf("subtract is %d\n",c);
			break;
		case 3:
			printf("enter two number");
			scanf("%d%d",&a,&b);
			c=a*b;
			printf("multiply is %d\n",c);
			break;
		case 4:
			printf("enter two number");
			scanf("%d%d",&a,&b);
			c=a/b;
			printf("divide is %d\n",c);
			break;
		case 5:
			exit(0);
	}
	}
	return 0;
}
