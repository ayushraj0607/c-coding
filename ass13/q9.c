#include<stdio.h>
int main()
{
	char a;
		printf("enter anything");
		scanf("%c",&a);
		switch(a)
		{
			case 'A': case 'E': case 'I': case 'O': case 'U':
			case 'a': case 'e': case 'i': case 'o': case 'u':
				printf("vowels");
				break;
			case 'b' ... 'd': case 'f' ... 'h': case 'j' ... 'n':
			case 'p' ... 't': case 'v' ... 'z':
			case 'B' ... 'D': case 'F' ... 'H': case 'J' ... 'N':
			case 'P' ... 'T': case 'V' ... 'Z':
			printf("consonants");
			break;
			default:
			printf("special character");				
			break;
		}
	return 0;
}
