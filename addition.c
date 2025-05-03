#include<stdio.h>
void main()
{
    int num , n ,sum=0 , r  , c =0;
    printf(" \n enter the number : ");
    scanf("%d",&num);
    n=num;
    for(int i=0;i<=c;i++)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
        c++;
        if(n=0)
        {
            c=-1;
        }
        
    }
    printf(" \n the sum of %d is %d",num , sum);
}