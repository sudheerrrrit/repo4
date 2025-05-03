#include<stdio.h>
int binarysearch(int arr[],int size , int target)
{
    int start = 0;
    int end = size -1;
    while(start<=end )
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == target)
        return mid;
        if(arr[mid]<target)
        start=mid+1;
        else
        end=mid-1;
    }
    return -1;
}
int main()
{
    int arr[]={2,3,4,10,40};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target =40;
    int result=binarysearch(arr , size , target);
    if(result !=0)
    {
        printf(" \n the number is present at index %d",result);
    }
    else
    {
        printf("\n the number is not present ");
    }
}