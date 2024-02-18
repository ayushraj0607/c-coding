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
    for(i=0;i<10;i++)
    {
        display(s[i]);
    }
}
int main()
{
    struct student s[10];
    input_array(s, 10);
    display_array(s, 10);
    return 0;
}