#include<stdio.h>
int main()
{
    int arr[10],sum=0,k;
    printf("enter num");
    for(k=1;k<=10;k++)
    {
    scanf("%d",&arr[k]);
}
    for(k=1;k<=10;k++)
    sum=sum+arr[k];
    printf("sum is %d",sum);
    return 0;
}
