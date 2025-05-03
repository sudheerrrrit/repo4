#include<stdio.h>
#include<math.h>
void main(){
float x , y , r , theta;
printf(" enter the value of x and y");
scanf("%f%f",&x,&y);
r=sqrt(x*x+y*y);
theta=atan2(y,x);
theta=theta*180/3.14;//convert theta to degree
printf("r=%ftheta=%f",r,theta);
}