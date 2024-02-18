#include<stdio.h>
    void input(int **q,int n,int size[]);
     void display(int **q,int n,int size[]);
int main()
    {
        int *p[4];
        int a[5],b[6],c[3],d[8];
        int size[]={5,6,3,8};
        p[0]=a;
        p[1]=b;
        p[2]=c;
        p[3]=d;
        input(p,4,size);
        display(p,4,size);
    }
    void input(int **q,int n,int size[])
    {
        int i,j;
        
      for(i=0;i<n;i++)
      {
        printf("enter %d number",size[i]);
        for(j=0;j<size[i];j++)
        scanf("%d",*(q+i)+j);
      }
    }
   
        void display(int **q, int n, int size[]) {
    int i, j;
    for (i = 0; i < n; i++) {
        printf("Array %d: ", i);
        for (j = 0; j < size[i]; j++) {
            printf("%d ", *q[i]+j);
        }
        printf("\n");
    }
}

