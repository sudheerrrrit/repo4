#include<iostream>
using namespace std ;
class point{
    int x , y;
    public:
    function(int a , int b) // inline parameterised constructor 
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout << x << ":" << y;
    }
};
int main()
{
    point p1;
    p1.function(2,3);
    p1.display();

}