#include<stdio.h>
void main()
{
    int ml , nst , nsp  , n ;
    printf(" \n enter the number of rows = ");
    scanf("%d",&n);
    nst = 1;
    nsp = n/2;
    ml = (n/2+1);
    for(int i ; i<=n ; i++)
    {
        for(int j =1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(int k =1;k<=nst ; k++)
        {
            printf("*");
       
        }
         if(i<ml)
        {
            nsp--;
            nst+=2;
        }
        else 
        {
            nsp++;
            nst-=2;
    }
        printf("\n");
    }

}