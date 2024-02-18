#include<stdio.h>
#include<string.h>
void swap_arr(char *str1, char *str2);
int main()
{
	char str1[20],str2[20],swap[20];
	printf("enter 1st string:");
	fgets(str1,20,stdin);
	str1[strlen(str1)-1]='\0';
	printf("enter 2nd string:");
	fgets(str2,20,stdin);
	str2[strlen(str2)-1]='\0';
	swap_arr(str1,str2);
	printf("%s %s",str1,str2);
	return 0;
}
void swap_arr(char *str1, char *str2)
{
	char swap;
	int i;
	for(i=0;str1[i]&&str2[i];i++)
	{
		swap=str1[i];
		str1[i]=str2[i];
		str2[i]=swap;
	}
}
