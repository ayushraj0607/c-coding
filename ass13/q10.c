#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,l,choice;
	while(1)
	{
	printf("1.Calculate LCM \n2.Calculate Sum of Digits \n3.Volume of Cuboid \n4.Check wheather Prime or Not \n5.Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter two number\n");
			scanf("%d%d",&a,&b);
			for(l=a>b?a:b;l<=a*b;l++)
			{
				if(l%a==0&&l%b==0)
			{
				printf("LCM is %d\n",l);
				break;
			}
			}
			break;
			
		case 2:
			printf("enter any digit\n");
			scanf("%d",&a);
			b=0;while(a)
			{
				b=b+a%10;
				a/=10;
			}
			printf("sum is %d\n",b);
			break;
		
		case 3:
			printf("enter length width and height\n");
			scanf("%d%d%d",&a,&b,&c);
			printf("Volume of cuboid is %d\n",a*b*c);
			break;
			
		case 4:
			printf("enter a num\n");
			scanf("%d",&a);
			for(b=2;b<a;b++)
			if(a%b==0)
			break;
			if(a==b)
			printf("%d is prime\n",a);
			else 
			printf("%d is not prime\n",a);
			break;
			
		case 5:
			exit(0);
			break;
	}
}
	return 0;
}
