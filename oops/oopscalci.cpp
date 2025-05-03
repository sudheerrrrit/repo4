#include<iostream>
using namespace std ; 
class calculator{
    int num1 ; 
    int num2 ;
    public:
    void set(int num1 , int num2)
    {
        this -> num1 = num1;
        this -> num2 = num2 ;
    }
    void getadd()
    {
        cout << "the addition of num1 and num2 is "<< this -> num1 + this -> num2 ;
    }
};
int main()
{
    calculator calci ;
    int num1 , num2 ;
    cout << "enter the num1 and num2 ";
    cin >> num1 >> num2 ;
    calci.set(num1 , num2);
    calci.getadd();
}