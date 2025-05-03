#include<stdio.h>
void main()
{
    int num ;
    printf(" enter the number =  ");
    scanf("%d",&num);
    if(num%2==1)
    {
        printf(" the  number is already odd");
    }
    else
    {
        num=num+1;
        printf(" the odd num is %d",num);
    }
}