#include<stdio.h>
int main()
{
	int x;
	printf("enetr choices");
	scanf("%d",&x);
	switch(x)
	{
		case 1:
		printf("Good");
		break;
		case 2:
		printf("Better");
		break;
		case 3:
		printf("Best");
		break;
		default:
		printf("Invalid");
	}
}
