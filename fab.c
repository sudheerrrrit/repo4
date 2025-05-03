#include<stdio.h>
void main()
{
    int first = 0 , second = 1 , next , n; 
    printf(" \n enter the no. of terms = ");
    scanf("%d",&n);
    printf(" the series is = 0 1 ");
    for(int i=0;i<n;i++)
    {
        next = first + second;
        printf(" %d ",next);
        first=second;
        second = next;
        

    }
}