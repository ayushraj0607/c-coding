#include<stdio.h>
#include<string.h>
struct student
{
    int roll_no;
    char name[30];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    float percentage;
};
struct student student_input()
{
    struct student s;
    printf("\nenter Roll No");
    scanf("%d",&s.roll_no);
    printf("\nEnter Name");
    fflush(stdin);
    fgets(s.name,30,stdin);
    s.name[strlen(s.name)-1]='\0';
    printf("\nenter Chem marks: ");
    scanf("%d",&s.chem_marks);
    printf("\nenter Maths marks: ");
    scanf("%d",&s.maths_marks);
    printf("\nenter Physics marks: ");
    scanf("%d",&s.phy_marks);
    s.percentage=(s.chem_marks+s.phy_marks+s.maths_marks)/3.0;
    printf("\npercentage is:  %f",s.percentage);
    return s;
}
void display(struct student s)
{
    printf("%d \n %s/n %f",s.roll_no,s.name,s.percentage);
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
    struct student s[5];
    input_array(s, 5);
    display_array(s, 5);
    return 0;
}
