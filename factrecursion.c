#include<stdio.h>
long int fact(int);
void main()
{
    int num ; 
    long int factorial ;
    printf("enter the number = ");
    scanf("%d",&num);
    factorial=fact(num);
    printf(" \n the factorial of %d is %ld ",num,factorial);
}
long int fact(int x )
{
    long int f ; 
    if (x==1)
    {
        return(1);
    }
    else
    {
            f=x*fact(x-1);

    }

    return(f);
}

