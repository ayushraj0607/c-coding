#include<stdio.h>
#include<string.h>
void occurance(char *str, char ch, int *arr);
int main()
{
    int arr[30];
    char str[30],ch;
    printf("enter any nane");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("enter any character");
    scanf("%c",&ch);
    occurance(str,ch,arr);
    return 0;
}
void occurance(char *str, char ch, int *arr)
{
    int i;
    for(i=0;*(str+i);i++)
    {
        if(str[i]==ch)
        arr[i]=i;
    }
    
    printf("%d",arr[i]);
}