#include<stdio.h>
int lcm(int a, int b);
int hcf(int a, int b);
int check_prime(int n);
int next_prime(int n);
void print_n_prime(int n);
void print_prime_between_no(int a, int b);
void print_n_fibonacci_series(int n);
void pascal_triangle(n);


void print_n_fibonacci_series(int n)
{
    int a=-1; int b=1; int c;
    while(n)
    {
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
    n--;
    }
}
void print_prime_between_no(int a, int b)
{
    int i;
    for(i=a+1; i<b;i++)
    {
        if(check_prime(i))
        printf("%d",i);
    }
}
void print_n_prime(int n)
{
    int x=2;
    while(n)
    {
        if(check_prime(x))
        printf("%d",x);
        n--;
    }
    x++;
}
int next_prime(int n)
{
    while(!check_prime(++n));
    return n;
}
int check_prime(int n)
{
    int i;
    for(i=2; i<=n-1; i++)
    if(n%i==0)
    return 0;
    return 1;
}
int lcm(int a, int b)
{
    int l;
    for(l=a>b?a:b; l<=a*b; l++)
        if(l%a==0 && l%b==0)
        return l;  
}
int hcf(int a, int b)
{
    int h;
    for(h=a<b?a:b; h>=1; h--)
        { 
            if(a%h==0&&b%h==0)
            return h;
        }   
}
int main()
{
    int a;
    printf("enter any num\n");
    scanf("%d",&a);
    print_n_prime(a);
      return 0;
}
void pascal_triangle(int n)
{
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        if(j>=3+i&&j<=5-i)
        {
        if(k)
        printf("*");
        else print(" ");
        k=1-k;
        }
        else 
        printf(" ");
    }printf("\n");
}