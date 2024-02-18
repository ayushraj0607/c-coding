#include<stdio.h>
#include<string.h>
void lowercase(char *str);
int main()
{
    char str[30]; 
    printf("enter any name");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    lowercase(str);
}
void lowercase(char *str)
{
    int i;
    for(i=0;i<str[i];i++)
    {
        if(str[i]>96 && str[i]<123)
        {
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
}
