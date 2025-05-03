#include<stdio.h>
void main()
{
    int first=0,sec=1,next,count=2,sum=1;
    printf(" the fbonacci series is %d\t%d\t",first,sec);
    while(1)
    {
        next=first+sec;
        if(next>100)
        break;
        printf("%d\t",next);
        sum=sum+next;
        first=sec;
        sec=next;
        count++;

    }
    printf("%d\t",sum);
    printf("%d",count);
}