#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[20];
};
struct student student_input()
{
    struct student s;
    printf("enter roll no");
    scanf("%d",&s.roll_no);
    fflush(stdin);
    printf("enter name");
    fgets(s.name,20,stdin);
    s.name[strlen(s.name)-1]='\0';
    return s;
}
void display(struct student s)
{
    printf("%d %s",s.roll_no,s.name);
} 
void input_array(struct student s[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        s[i]=student_input();
    }
}
void display_array(struct student s[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        display(s[i]);
    }
}
int main()
{
    int i,n;
    printf("enter n number");
        scanf("%d",&n);
    struct student s[n];
    input_array(s, n);
    display_array(s, n);
    
    return 0;
}