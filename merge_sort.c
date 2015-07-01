#include<stdio.h>
void splitArray(int[],int);
void mergeSort(int[],int);
void merge(int [],int [],int,int,int[]);
void displayArray(int [],int);
void main()
{   int a[100],n,i;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("\nEnter the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    splitArray(a,n);
}
void splitArray(int c[],int n)
{
    int s1,s2,m,r,j,a1[100],a2[100],k,d[100];
    s1=n/2;
    s2=n-s1;
    for(m=0,r=s2-1,k=0;m<s1,r<n;m++,r++,k++)
    {
        a1[m]=c[m];
        a2[k]=c[r];
    }
    mergeSort(a1,s1);
    mergeSort(a2,s2);
    merge(a1,a2,s1,s2,d);
}
void mergeSort(int a[],int n)
{
    int i,j,temp;
    if(n==1)
    {
        return ;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    }
}
void merge(int arr1[],int arr2[],int m,int n,int c[])
{

    int i=0,j=0,k=0,s;
    s=m+n;
    while(i<m&&j<n)
    {
        if(arr1[i]<arr2[j])
        {
            c[k++]=arr1[i++];


        }
        else  if(arr1[i]>arr2[j])

        {
            c[k++]=arr2[j++];


        }
        else         if(arr1[i]==arr2[j])
        {

            c[k++]=arr1[i++];
            c[k++]=arr2[j++];
        }


    }

while(i<m)
{
    c[k++]=arr1[i++];
}

while(j<n)
{
    c[k++]=arr2[j++];
}

displayArray(c,s);
}

void displayArray(int m[],int n)
{
    int i;
    printf("\nMerged Sort Array\n");
    for(i=0; i<n; i++)
    {
        printf("%d   ",m[i]);
    }
}
