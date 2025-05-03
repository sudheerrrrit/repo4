#include<iostream>
using namespace std ;
class man {
    int height ;
    int age ; 
    string name;
    public:
    void setheight(int h)
    {
        height = h;
    } 
    void setage(int age)
    {
        this -> age = age;
    }
    int getage()
    {
        return age;
    }
    int getheight()
    {
        return height;
    }
};
int main()
{
    man sudheer ;
    sudheer.setheight(12);
    sudheer.setage(19);
    cout << "the age of the sudheer is " << sudheer.getage() << endl ;
    cout << "the height of the sudheer is "<< sudheer.getheight();

}