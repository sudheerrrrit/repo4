#include<stdio.h>
#include<math.h>
void main(){
    float lat1 , lat2 , lon1 , lon2 ,d;
    printf(" enter the value of latitude 1 and longitude 1 of first place ");
    scanf("%f%f",&lat1,&lon1);
    printf(" enter the value of latitude 1 and latitude 2 of the second place ");
    scanf("%f%f",&lat2
    ,&lon2);
    lat1=lat1*3.14/180;
    lon1=lon1*3.14/180;
    lat2=lat2*3.14/180;
    lon2=lon2*3.14/180;
    d=3963* acos(sin(lat1)*sin(lat2) + cos(lat1)*cos(lat2)*cos(lon2-lon1));
    printf(" the distance between place  nd place 2 is %f",d);



}