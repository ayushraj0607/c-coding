#include<stdio.h>
void check_prime(int n);
int main()
{
    int x;
    printf("enter any no");
    scanf("%d",&x);
    check_prime(x);
        return 0;
}
void check_prime(int n)
{
    int i,j;
    for(j=n+1; ;j++)
    {
    for(i=2;i<j;i++)
    {
    if(j%i==0)
    break;
    if (j==i) 
    printf("%d",j);
    break;
    }
    }
}
