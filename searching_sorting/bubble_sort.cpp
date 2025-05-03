// bubble sort = the largest element placed at largest position 
#include<iostream>
using namespace std ;
void swap(int x , int y)
{
    int temp ;
    temp = x ; 
    x = y ; 
    y = temp ;
}
void bubble_sort(int * arr, int n )
{
    int i , j ;
    for(i = 1 ; i <= n; i++)
    {
        for(j = 0 ; j < n - i ; j++)
        {
            if(arr[j] > arr[j+1]) // check if previous element is greater 
            {
                int temp = arr[j]; //  preform swapping 
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[20] , n ;
    cout << "\n enter the number of elemets in array = ";
    cin >> n ; 
    cout << "\n enter the elements in array ...\n";
    for(int i = 0 ; i < n ; i++)
    {
        cout << "enter the arr[" << i+1 << "]" << "element : ";
        cin >> arr[i];
    }
    bubble_sort(arr , n);
    cout << "the sorted array are ...";
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " " ;
    }
}