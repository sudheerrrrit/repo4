#include<stdio.h>
long int pow (int , int );
void main()
{
    int a , b ;
    long int power;
    printf(" \n enter the value of a and b ");
    scanf("%d%d",&a,&b);
     power = pow(a , b );
    printf(" the power of %d and %d is %ld",a,b,power);
}
long int pow (int x ,int y )
{
    long int l = 1;
    for(int i=1;i<=y;i++)
    {
        l=l*x;
    }
    return(l);
}