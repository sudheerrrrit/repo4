#include<iostream>
using namespace std;
int binarysearch(int arr[],int size , int target)
{
    int start=0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int target = 4;
    int size = 10;
    int res;
    res=binarysearch(arr,size,target);
    if(res==-1)
    {
        cout << "number is not exist in the array"<< endl;
    }
    else{
        cout << "number is found at "<< res+1 << "location ";
    }
}