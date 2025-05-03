#include<iostream>
using namespace std ;
int main()
{
    int arr[10] , n ;
    cout << "enter the no. of  element in array ";
    cin >> n ;
    cout << "enter the element in the array .. ";
    for(int i = 0 ;i < n ; i++)
    {
        cout << "enter the array"<<"["<<i<<"]" << "element ";
        cin >> arr[i];
    }
    for(int i = 0 ;i < n ; i++)
    {
        
        cout << arr[i];
    }
    cout << "enter the osition of the element to delete :";
    int num ;
    cin >> num ;
    for(int i = 0 ; i  < n ; i++ )
    {
        if(arr[i]== num)
        {
            for(int j = i ; j < n-1 ; j++)
            {
                arr[j ]=arr[j+1];
            }
        }
    }
    n--;
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }

}