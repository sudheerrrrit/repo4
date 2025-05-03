#include<stdio.h>
#include<math.h>
void main()
{
    int x , n ;
    float y ;
    printf(" \n enter the  value of x and n ");
    scanf("%d%d",&x,&n);
    y=pow((x+5),n)-sqrt((x*3)/(2*n));
    printf(" the value of y is %f",y);
}