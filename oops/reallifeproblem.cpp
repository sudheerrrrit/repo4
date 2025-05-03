#include<iostream>
using namespace std;
// rectangle class declaration
class rectangle{
    private:
     double length;
     double width;
    public:
     void setlength(double);
     void setwidth(double);
     double getlength() const;
     double getwidth() const;
     double getarea() const;
};
// setwidth assign the value to the width member
void rectangle:: setwidth(double w)
{
    width=w;
}
// setlength assign the value to the length member 
void rectangle:: setlength(double l)
{
    length=l;
}
// getlength assign the value to the length member
double rectangle :: getlength() const{
    return length;
}
// getwidth assign the value to the width member
double rectangle:: getwidth() const{
    return width;
}
// it give the area to the function
double rectangle:: getarea() const{
    return width*length;
}
int main()
{
    double number ;
    double totalarea;
    rectangle kitchen ; 
    rectangle bedroom;
    rectangle den;// to hold den dimention 
    // get the kitchen dimention 
    cout << "enter the kitchen length = "<< endl ;
    cin >> number;
    kitchen.setlength(number);
    cout << "enter the kitchen width "<< endl;
    cin >> number;
    kitchen.setwidth(number);
    cout << "enter the kitchen length = "<< endl ;
    cin >> number;
    bedroom.setlength(number);
    cout << "enter the kitchen width "<< endl;
    cin >> number;
    bedroom.setwidth(number);
    cout << "enter the kitchen length = "<< endl ;
    cin >> number;
    den.setlength(number);
    cout << "enter the kitchen width "<< endl;
    cin >> number;
    den.setwidth(number);
    // calculating total area 
    totalarea = kitchen.getarea()  + bedroom.getarea() + den.getarea() ;
    cout << "the area of the total room is "<< totalarea ;
}