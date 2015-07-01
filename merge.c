#include<stdio.h>
int arr1[5]= {1,4,5,6,7};
int arr2[5]= {2,3,8,9,12};
void merge(int[]);
void mergeArray(int[]);
void main()
{
    int merge_array[10];
    merge(merge_array);
}
void merge(int c[])
{
    int i=0,j=0,k=0;
    while(i<5&&j<5)
    {
        if(arr1[i]<arr2[j])
        {
            c[k++]=arr1[i++];


        }
        else         if(arr1[i]>arr2[j])

        {
            c[k++]=arr2[j++];


        }
        else         if(arr1[i]==arr2[j])
        {

            c[k++]=arr1[i++];
            c[k++]=arr2[j++];
        }


    }

while(i<5)
{
    c[k++]=arr1[i++];
}

while(j<5)
{
    c[k++]=arr2[j++];
}

mergeArray(c);
}

void mergeArray(int m[])
{
    int i;
    for(i=0; i<10; i++)
    {
        printf("%d   ",m[i]);
    }
}
