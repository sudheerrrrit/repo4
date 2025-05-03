#include<iostream>
using namespace std ;
// rectangle class declaration 
class rectangle
{
    private:
     double width ;
     double length ;
    public:
     void setwidth(double);
     void setlength(double);
     double getwidth() const;
     double getlength() const ;
     double getarea() const;
};
void rectangle :: setwidth(double w)
{
    width=w;
}
void rectangle:: setlength(double l)
{
    length=l;
}
double rectangle:: getlength() const
{
    return length;
}
double rectangle:: getwidth() const

{
   return width;
}
double rectangle:: getarea() const
{
  return width*length ;
}
int main()
{
    rectangle box ;// define an instant of rectangle class 
    double rectwidth;
    double rectlength;
    cout << "area claculating :";
    cout << "width = ";
    cin >> rectwidth;
    cout << "length= ";
    cin >> rectlength;
    // store the width and lenght of rectangle in box object
    box.setwidth(rectwidth);
    box.setlength(rectlength);
    
    // displaying the rectangle data

    cout << "here is the rectangle's data \n";
    cout << "width: "<<box.getwidth();
    cout << "length" << box.getlength();
    cout << "area" << box.getarea();
}
