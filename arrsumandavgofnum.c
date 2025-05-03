#include<stdio.h>
void main()
{
    int s[100] , i ,m ;
    float  sum=0.0 , avg;
    printf(" how many number of lines have to printed ");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        printf(" enter the number ");
        scanf("%d",&s[i]);
    

    
        sum=sum+s[i];
    }
    printf("%f",sum);
    avg=sum/m;
    printf("%f",avg);

}