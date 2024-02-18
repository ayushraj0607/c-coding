#include<stdio.h>
#include<string.h>
void string_length();
int length(char a[]);
char* compare_string(char a[], char b[]);
char* uppercase(char str[]);
char* lowercase(char str[]);
int check_vowel(char str[]);
//1st method
/*int main()
{
    string_length();
    return 0;
}
void string_length()
{
    int i;
    char str[50];
    printf("enter a string:- ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    for(i=0;str[i];i++);
    printf("length of a sring is %d",i);  
}
*/
//2nd method
/*
int main()
{
    printf("length of string is %d",length("bhopal"));
}
int length(char a[])
{
    int i;
    for(i=0;a[i];i++);
    return i;
}
*/
//3rd method(take something return something)
/*
int length_string(char str[], int size);
int main()
{
    int x;
    char a[50];
    printf("enter any string");
    fgets(a,50,stdin);
    a[strlen(a)-1]='\0';
    x=length_string(a,50);
    printf("length of string is %d",x);
}
int
 length_string(char str[], int size)
{
    int i;
    for(i=0;str[i];i++);
    return i;
}
*/
//reverse of string
/*
int main()
{
    char s,str[50];
    int i,l;
    printf("enter a string :-");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        s=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=s;
    }
    printf("reverse of string are %s",str);
}
*/
/*
void reverse_string(char str[],int size);
int main()
{
    char a[50];
    printf("enter a string :- ");
    fgets(a,50,stdin);
    reverse_string(a, 50);
    return 0;
}
void reverse_string(char str[],int size)
{
    int l,i,s;
    str[strlen(str)-1]='\0';
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        s=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=s;
    }
    printf("reverse of string are %s",str);
}
*/
/*
int main()
{
    char str1[30],str2[30];
    printf("enter 1st string");
    fgets(str1,30,stdin);
    str1[strlen(str1)-1]='\0';
    printf("enter 2nd string");
    fgets(str2,30,stdin);
    str2[strlen(str2)-1]='\0';
    int x=compare_string(str1, str2);
    printf("%d",x);
}
char* compare_string(char a[], char b[])
{
    int i;
    for(i=0;a[i]&&b[i];i++)
    if(a[i]!=b[i])
    break;
    return a[i]-b[i];
}
*/
/*
int main()
{
    char str1[30];
    printf("enter string");
    fgets(str1,30,stdin);
    str1[strlen(str1)-1]='\0';
    char* x=uppercase(str1);
    printf("%s",x);
}
char* uppercase(char str[])
{
    int i;
    for(i=0;str[i];i++)
    if(str[i]>='a'&&str[i]<='z')
    str[i]=str[i]-32;
    return str;
}
*/
/*
int main()
    {
        char str1[30];
        printf("enter any string");
        fgets(str1,30,stdin);
        str1[strlen(str1)-1]='\0';
        char* x=lowercase(str1);
        printf("%s",x);
        return 0;
    }
    char* lowercase(char str[])
    {
        int i;
        for(i=0;str[i];i++)
        if(str[i]>='A' && str[i]<='Z')
        str[i]=str[i]+32;
        return str;
    }
    */
   /*
   int main()
   {
    char str1[30];
    printf("enter any string");
    fgets(str1,30,stdin);
    str1[strlen(str1)-1]='\0';
    int x=check_vowel(str1);
    printf("%d",x);
   }
   int check_vowel(char str[])
   {
        int i,count=0;
        for(i=0;str[i];i++)
        {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
        str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        count++;
        }
        return count;
   }
   */
  /*
    int occurence(char str[], char x);
  int main()
  {
    char str1[30],a;
    printf("enter any string:-  ");
    fgets(str1,30,stdin);
    str1[strlen(str1)-1]='\0';
    printf("enter any character:-  ");
    scanf("%c",&a);
    int p=occurence(str1,a);
    printf("%d",p);
    return 0;
  }
  int occurence(char str[], char x)
  {
    int i;
    for(i=0;str[i];i++)
    {
    if(str[i]==x)
    return i;
}
return -1;
  }
  */
 /*
 int indices(char str[], char ch, int start_index, int end_index);
 int main()
 {
    int s,e;
    char str1[30],c;
    printf("enter any string");
    fgets(str1,30,stdin);
    str1[strlen(str1)-1]='\0';
    printf("enter any character:-  ");
    scanf("%c",&c);
    printf("start index");
    scanf("%d",&s);
    printf("end index");
    scanf("%d",&e);
    int x=indices(str1,c,s,e);
    printf("%d",x);
    return 0;
 }
 int indices(char str[], char ch, int start_index, int end_index)
 {
    int i;
    for(i=start_index;i<=end_index;i++)
    if(str[i]==ch)
    return i-start_index;
     return -1;
 }
 */
/*
char* swapping_index(char str[30], int index_1, int index_2);
int main()
{
    int s,f;
    char str1[30];
    printf("enter any string");
    fgets(str1,30,stdin);
    printf("1st index ");
    scanf("%d",&f);
    printf("2nd index ");
    scanf("%d",&s);
    char* x=swapping_index(str1,f,s);
    printf("%s",x);
    return 0;
}
char* swapping_index(char str[30], int index_1, int index_2)
{
    char swap;
    swap=str[index_1];
    str[index_1]=str[index_2];
    str[index_2]=swap;
    return str;
}
*/
int check_alphanumeric(char str[30]);
int main()
{
    int x;
    char str1[30];
    printf("enter any string ");
    fgets(str1,30,stdin);
    x=check_alphanumeric(str1);
    if(x==1)
    printf("it is alphanumeric");
    if(x==0)
    printf("it is not alphanumeric");
}
int check_alphanumeric(char str[30])
{
    int i,alpha=0,numeric=0;
    for(i=0;str[i];i++){
    if(str[i]>='0' && str[i]<='9')
    numeric=1;
    if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z') 
    alpha=1;
    }
    if(alpha&&numeric)
    return 1;
    else
    return 0;
}