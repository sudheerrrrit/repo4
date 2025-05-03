#include<stdio.h>
int fabonacci(int);
void main()
{
    int i , n , term;
    printf(" enter the number of terms that have to printed : ");
    scanf("%d",&n);
    printf(" \n the fabonacci series is \n ");
    for(i=1;i<=n;i++)
    {
        term=fabonacci(i);
        printf(" %d\t ",term);
    }

}
int fabonacci(int x)
{
    int res;
    if(x==1)
    return(0);
    else if(x==2)
    return(1);
    else
    res=fabonacci(x-1)+fabonacci(x-2);
    return(res);
}