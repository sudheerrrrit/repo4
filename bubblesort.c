#include<stdio.h>
void main()
{
    int i ,j , n , temp , a[20];
    printf(" \n how many numbers : ");
    scanf("%d",&n);
    printf("\n enter the number :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;


            }
        }
    }
    printf(" \n the sorted element are : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}