#include<stdio.h>
#include<string.h>
/*
void palindrome(char str[100],int x);
int main()
{
    int x;
    char str2[100];
    printf("enter any string");
    fgets(str2,100,stdin);
    str2[strlen(str2)-1]='\0';
    x=strlen(str2);
    palindrome(str2,x);
    return 0;[]
}
void palindrome(char str[100], int l)
{
    int i;
    char s;
    for(i=0;i<l/2;i++)
    {
    if(str[i]!=str[l-i-1])
    {
    printf("it is not palindrome character\n");
    break;
    }
    else
    printf("palindrome");
    break;
    }
}
*/
/*
void count_word();
int main()
{
    count_word();
    return 0;
}
void count_word()
{
    int count=1,i;
    char str[100];
    printf("enter a string  ");
    fgets(str,100,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++)
    {
    if(str[i]==' ')
    count++;
    }
    printf("%d",count);
}
*/
char* trim(char str[]);
int main()
{
    char str[1000];
    printf("enter any string");
    fgets(str,1000,stdin);
    printf("length before trimming: %d\n",strlen(str));
    printf("%s",trim(str));
    printf("\nlength after trimming: %d",strlen(str));
}
char* trim(char str[])
{
    int i=0,j,k,count=0;
    for(k=strlen(str)-1;str[k]==' ';k--)
    count++;
    k=strlen(str);
    while(str[i]==' ')
    i++;
    for(j=0;str[j+i];j++)
    str[j]=str[i+j];
    str[k-count-i]='\0';
    return str;
}
