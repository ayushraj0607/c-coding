#include<stdio.h>
void merge(int *ar1, int size1, int *ar2, int size2,int *array, int size);
int main()
{
	int arr1[5],arr2[5],arr[10],i;
	printf("enter elements of 1st array: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter elements of 2nd array: ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge(arr1,5,arr2,5,arr,10);
	return 0;
}
void merge(int *ar1, int size1, int *ar2, int size2,int *array, int size)
{
	int i,r,c,j,k;
	for(r=1;r<size1-1;i++)
	{
		for(i=0;i<size-1-r;i++)
		{
			if(ar1[i]>ar1[i+1])
			{
				c=ar1[i];
				ar1[i]=ar1[i+1];
				ar1[i+1]=c;
			}
		}
	}
	for(r=1;r<size1-1;i++)
	{
		for(i=0;i<size-1-r;i++)
		{
			if(ar2[i]>ar2[i+1])
			{
				c=ar2[i];
				ar2[i]=ar2[i+1];
				ar2[i+1]=c;
			}
		}
	}
	for(i=0,j=0,k=0;i<size1&&j<size2;k++)
	{
		if(ar1[i]>ar2[j])
		{
			array[k]=ar2[j];
			i++;
		}
		else
		{
			array[k]=ar1[i];
			j++;
		}
		while(i<size1)
		{
			array[k]=array[i];
			k++;i++;
		}
		while(j<size2)
		{
			array[k]=array[j];
			k++;j++;
		}
	}
	for(i=0;i<10;i++)
	printf("%d",array[i]);
}
