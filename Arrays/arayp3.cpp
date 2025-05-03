#include<iostream>
using namespace std ; 
int main()
{
    int m , n , p ; 
    int arr[m] , brr[n] , crr[p];
    cout << "enter the no. of element in array1 = ";
    cin >> m ;
    cout << "\n enter the element in array2 = ";
    cin >> n ;
    for(int i = 0 ; i < m ; i++)
    {
        cin >> arr[i];
    }
    for(int j = 0 ; j < n ; j++)
    {
        cin >> arr[j];
    }
    p=m + n ;
    for(int i = 0 ; i < p; i++)
    {
        cout  << arr[i];
    }
}