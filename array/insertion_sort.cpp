#include<iostream>
using namespace std ;
void insertion_sort(int arr[] , int n )
{
    int i  , j , temp ;
    for(i = 1 ; i < n ;i++)
    {
        temp = arr[i];
        for(j = i -1 ; j >=0 ; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
   
}
int main()
{
    int arr[20] , n , min , i , j;
    cout << "\n enter the number of element = ";
    cin >> n ; 
    cout << "\n enter the element ...";
    for( i = 0 ; i < n ; i++)
    {
        cout << "\n enter the arr[" << i+1 <<"]"<< "number";
        cin >> arr[i];
    }
    insertion_sort(arr , n );
    cout << "\n sorted array is ...";
    cout << "[";
    for(i = 0 ; i < n ; i++)
    {
        cout << arr[i];
    }
    cout << "]";
}