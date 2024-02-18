#include<stdio.h>
void sort(int *ptr, int size);
int main()
{
	int arr[5],i;
	printf("enter values");
	for(i=0;i<5;i++)
	scanf("%d",&arr[i]);
	sort(arr,5);
	return 0;
}
void sort(int *ptr, int size)
{
	int i,r,c;
	for(r=1;r<size-1;r++)
	{
		for(i=0;i<size-1-r;i++)
		{
			if(ptr[i]>ptr[i+1])
			{
				c=ptr[i];
				ptr[i]=ptr[i+1];
				ptr[i+1]=c;
			}
		}
	}
	for(i=0;i<size;i++)
	printf("%d",ptr[i]);
}
