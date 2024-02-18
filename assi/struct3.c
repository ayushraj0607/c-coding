#include<stdio.h>
#include<string.h>
struct employee
{
	int id;char name[30];int salary;
};
struct employee input()
{
	struct employee s;
	printf("enter employee id");
	scanf("%d",&s.id);
	printf("enter name of employee");
	fflush(stdin);
	fgets(s.name,30,stdin);
	s.name[strlen(s.name)-1]='\0';
	printf("enter salary of employee");
	scanf("%d",s.salary);
	return s;
}
void display(struct employee s)
{
	printf("%d",s.id);
	printf("\n%s",s.name);
	printf("\n%d",s.salary);
}
void input_array(struct employee arr[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		arr[i]=input();
	}
}
void display_array(struct employee arr[], int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		display(arr[i]);
	}
}
int highest_salary(struct employee arr[], int size)
{
	int i;
	struct employee max;
	max=arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i].salary>max)
		{
			max=arr[i];
		}
		return max;
	}
}
void sort_salary()
int main()
{
	
}
