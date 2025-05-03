#include<stdio.h>
void main()
{
    int first , second , next , range , i;
    printf("enter the range of series ");
    scanf(" %d",&range);
    first = 0;
    second = 1;
    printf(" the series is %d\t%d\t",first , second);
    for(i=1;i<=(range-2);i++)
    {
        next=first+second;
        printf("%d\t",next);
        first=second;
        second=next;

    }
}