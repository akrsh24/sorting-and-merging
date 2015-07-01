#include<stdio.h>
void bubbleSort(int[],int);
void main()
{
    int a[100],i,j,n,temp;
    printf("enter the limit of array\n");
    scanf("%d",&n);
    printf("enter the array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    bubbleSort(a,n);
}
void bubbleSort(int a[],int n)
{
    int i,j,temp,min;
    for(i=0; i<n; i++)
    {

        for(j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
}
