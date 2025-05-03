#include<stdio.h>
void main(){
    int num ;
    printf(" enter the num of five digit");
    scanf(" %d",&num);
    num = num/10000 + num%10;
    printf(" the addition of first and last digit is %d", num);
}