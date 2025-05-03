#include<stdio.h>
long int pow (int , int);
void main()
{
    int a , b  ;
    long int value ;
    printf(" enter the number of a : ");
    scanf("%d",&a);
    printf(" enter the number of b : ");
    scanf("%d",&b);
    value = pow(a , b );
    printf(" the power of %d and %d is %ld ",a , b , value);
}
long int pow (int x , int y)
{
    int l =1 ;
    for(int i=1;i<=y;i++)
    {
        l=l*x;
    }
    return(l);
}