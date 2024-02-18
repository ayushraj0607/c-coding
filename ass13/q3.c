#include<stdio.h>
int main()
{
	int a;
	printf("enter any number of a week\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("todai is monday");
			break;
		case 2:
			printf("todai is tuesday");
			break;
		case 3:
			printf("todai is wednesday");
			break;
		case 4:
			printf("todai is thrusday");
			break;
		case 5:
			printf("todai is friday");
			break;
		case 6:
			printf("todai is saturday");
			break;
		case 7:
			printf("today is sunday");
			break;
		default:
		printf("eneter valid day");
	}
}
