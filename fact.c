#include<stdio.h>
void main()
{
    int num , i , fact=1 ;
    printf(" enter the number = ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)//this ode is valid for to calculate factorial of 8
    {
        fact=fact*i;
    }
    printf(" the factorial is %d",fact);

}