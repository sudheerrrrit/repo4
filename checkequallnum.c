#include<stdio.h>
void main(){
    int num , a;
    long int revnum=0;
    printf(" enter the five digit number <= 32767 = ");
    scanf("\n%d",&a);
    num=a;
    revnum=revnum+(a%10)*10000;
    a=num/10;
    revnum=revnum+(a%10)*1000;
    a=num/10;
    revnum=revnum+(a%10)*100;
    a=num/10;
    revnum=revnum+(a%10)*10;
    a=num/10;
    revnum=revnum+a;
    printf(" the reverse of the number is %ld\n",revnum);
    if(revnum==num)
    {
        printf(" thegiven number is equall to its reverse number");\

    }
    else
    {
        printf(" the reverse of the given nyber is differert to previouse number");
    }

}