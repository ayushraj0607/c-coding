#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,i,sum=0,fac=1;
	float c;
	while(5)
	{
	printf("1.Factorial of num\n 2.Check Even or Odd\n 3.Area of Circle\n 4.Sum of first n natural number\n 5.Exit");
	printf("\n\n Enter choice");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
			printf("enter any number");
			scanf("%d",&b);
			for(i=1;i<=b;i++)
			{
			fac=fac*i;
			}
			printf("factorial is %d\n\n\n",fac);
	     	break;
			
	case 2:
			printf("enter any number");
			scanf("%d",&b);
			if(b%2==0)printf("even num\n\n"); else printf("odd num\n\n");
			break;
			
	case 3:
			printf("radius of circle");
			scanf("%f",&c);
			printf("Area of circle=%f\n\n",3.14*c*c);
			break;
			
	case 4:
			printf("enter any number");
			scanf("%d",&b);
			for(i=1;i<=b;i++)
			{
			sum=sum+i;
			S}
			printf("Sum of first n natural number = %d\n\n",sum);
			break;
			
			
	case 5:
			exit(0);
	}
}
printf("\n");
	return 0;
}
