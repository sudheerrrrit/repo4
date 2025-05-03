#include<stdio.h>
long int fact (int);
void main()
{
     long int factorial ;
     int num ; 
     printf(" enter the number : ");
     scanf("%d",&num);
     factorial=fact(num);
     printf(" the factorial of %d is %ld " , num ,factorial);

}
long int fact (int x )
{
    int l = 1 ;
    for(int i=1;i<=x;i++)
    {
        l=l*i;
    }
    return(l);
}