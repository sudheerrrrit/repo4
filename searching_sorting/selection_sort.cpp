// selection sort 
#include<iostream>
using namespace std ; 
int find_minindex(int arr[] , int n , int k)
{
    int min = k;
    int small = arr[k];

    for(int i = k+1 ; i < n; i++)
    {
        if(arr[i] < small)
        {
            min = i;
            small = arr[i];
        }
    }
    return min;
}
 void selection_sort(int arr[] , int n )
{
    int pos , temp ;
        for(int j = 0 ; j < n ; j++)
        {
            pos = find_minindex(arr , n , j);
            temp = arr[j];
            arr[j] = arr[pos];
            arr[pos]= temp;

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
    selection_sort(arr , n);
    cout << "the sorted array are ...";
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i];
    }
}