#include<stdio.h>
void main(){
    int l , b , area1 , perimeter1;
    printf(" enter the length and breath");
    scanf(" %d%d",&l,&b);
    area1 = l*b;
    perimeter1=2*(l+b);
    printf(" area is %d\nperimeter is %d",area1,perimeter1);
    float r,area2,perimeter2;
    printf(" enter the value of radius");
    scanf("%f",&r);
    area2=3.14*r*r;
    perimeter2=2*3.14*r;
    printf("the area is %f and perimeter is %f",area2,perimeter2);
}