#include<stdio.h>
int main()
{
	char a;
	printf("enter anything");
	scanf("%c",&a);
	switch(a)
	{
		case 65 ... 90:
			printf("Uppercase letter");
			break;
		case 97 ... 122:
			printf("Lowercase letter");
			break;
		default:
		printf("special character");
		break;
	}
	
	
	return 0;
}
