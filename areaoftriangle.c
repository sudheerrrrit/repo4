#include<stdio.h>
#include<math.h>
float area( float , float , float );
void main()
{
    float a , b , c ,res;
    printf(" \n enter the value of a , b , c ");
    scanf("%d%d%d",&a,&b,&c);
    res=area(a , b , c );
    printf(" the area is %f",res);
}
float area ( float x ,  float y , float z)
{
    float s , l;
    s=(x+y+z)/2;
    l=sqrt(s*(s-x)*(s-y)*(s-z));

}
