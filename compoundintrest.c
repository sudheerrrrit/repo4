#include<stdio.h>
#include<math.h>
void main()
{
    float p , n , r , ci=0;
    printf(" \nenter the amount of principal amount = ");
    scanf("%f",&p);
    printf(" \nenter the value of rate = ");
    scanf("%f",&r);
    printf("\n enter the amount of time ");
    scanf(" %f",&n);
    ci=p*pow((1+r/100),n);
    printf(" the compound intrest is %f",ci);
}