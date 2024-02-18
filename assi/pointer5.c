#include<stdio.h>
#include<string.h>
void find_index(char *str, int a, int b, char *arr);
int main()
{
	
	char str[20], arr[20];
	int a,b;
	printf("enter any name");
	fgets(str,20,stdin);
	str[strlen(str)-1]='\0';
	arr[strlen(arr)-1]='\0';
	printf("enter 1st index");
	scanf("%d",&a);
	printf("enter 2nd index");
	scanf("%d",&b);
	find_index(str, a, b, arr);
	return 0;
}
void find_index(char *str, int a, int b, char *arr)
{
	int i,k;
	for(i=a,k=0;i<b;i++)
	{
		arr[k]=str[i];
		k++;
	}
	for(i=0;i<k;i++)
	printf("%c",arr[i]);
	
}
