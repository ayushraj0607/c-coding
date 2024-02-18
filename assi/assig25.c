/*//swapping
#include<stdio.h>
void swap(int *p, int *q);
int main()
{
    int a,b;
    printf("enter two number");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("after swapping %d  %d",a,b);
}
void swap(int *p, int *q)
{
    int c;
    c=*p;
    *p=*q;
    *q=c;
}
*/
//lowercase to uppercae
#include<stdio.h>
void convert_uppercase(char *str);
int main()
{
    char string[100];
    printf("enter any word\n");
    scanf("%s", string);
    convert_uppercase(string);
    printf("in uppercase %s\n",string);
    return 0;
}
void convert_uppercase(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            *str=*str+32;
        }
        *str++;
    }
}