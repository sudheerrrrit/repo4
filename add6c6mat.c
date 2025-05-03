#include<stdio.h>
void main()
{
    int a[6][6],b[6][6],c[6][6],i , j ;
    printf(" enter the elements of first matrix = ");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        printf(" enter the elements of second matrix = ");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
        for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf(" the element of resultant matrix is \n ");
     for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf(" %d\t",c[i][j]);
        }
        printf("\n");
    }





    
}