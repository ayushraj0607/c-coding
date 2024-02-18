#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,choice;
		printf("1.Isoceless Triangle\n2.Right Angle Triangle\n3.Equilateral Triangle\n4.Exit\n\n\n");
		printf("Enter choice");
		scanf("%d",&choice); 
	while(4)
	{
	switch(choice)
	{
		case 1: printf("Enter sides of triangle \n");
				scanf("%d%d%d",&a,&b,&c);
				if(a+b>c||b+c>a||a+c>b)
				{
				printf((a==b||a==c||b==c)?("It is isosceless triangle\n"):("It is not isosceless triangle\n"));
				}
				else printf("not a valid triangle\n");
		case 2: printf("Enter sides of triangle\n");
				scanf("%d%d%d",&a,&b,&c);
				if(a+b>c||b+c>a||a+c>b)
				{
				printf(((a*a)+(b*b)==(c*c) || (c*c)+(b*b)==(a*a) || (a*a)+(c*c)==(b*b))?("It is right angle triangle\n\n"):("It is not right angle triangle\n\n"));
				}
				else printf("not a valid triangle\n");
		case 3: printf("Enter sides of triangle\n");
				scanf("%d%d%d",&a,&b,&c);
				if(a+b>c||b+c>a||a+c>b)
				{
				printf((a==b&&a==c&&b==c)?("It is equilateral triangle"):("It is not equilateral triangle"));
				}
				else printf("not a valid triangle");
		case 4: exit(0);
		default: printf("Invalid choice");
	}
}
}
