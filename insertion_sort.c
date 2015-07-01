#include<stdio.h>
void insertionSort(int[],int);
void main()
{
    int a[100],i,j,n;
    printf("enter the limit of array\n");
    scanf("%d",&n);
    printf("enter the array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    insertionSort(a,n);
}
void insertionSort(int a[],int n)
{
    int i,j,sortedIndex=-1,temp,min,minIndex;
    for(i=0; i<n; i++)
    {
        min=a[sortedIndex+1];
        for(j=sortedIndex+1; j<n; j++)
        {
            if(min>a[j])
            {
                min=a[j];
                minIndex=j;
            }
        }
        temp=a[sortedIndex+1];
        a[sortedIndex+1]=min;
        min=temp;
        sortedIndex++;
    }
    for(i=0; i<n; i++)
    {
        printf("%d  ",a[i]);
    }
}
