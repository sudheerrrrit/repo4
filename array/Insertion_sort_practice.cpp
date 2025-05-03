// insertion sort 
#include<iostream>
using namespace std ; 
void insertion_sort(int arr[] , int n)
{
    int temp , i ,  j ;
    for(i = 1 ; i < n ; i++)
    {
        temp = arr[i]; // let's assume the first element is sorted of the array
        for(j = i-1 ; j >=0 ; j--)
        {
            if(arr[j] > temp) // compare is previous element is greater the next element 
            {
                arr[j+1]=arr[j]; // write the element if it lesser than the prevoius element 
            }
            else{
                break; // go out if condition is false
            }
        }
        arr[j+1] = temp;
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
    insertion_sort(arr , n);
    cout << "the sorted array are ...";
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i];
    }
}