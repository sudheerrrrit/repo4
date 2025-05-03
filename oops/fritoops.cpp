#include<iostream>
using namespace std ;
class fruit{
    public:
    int price ;
    string name ; 
    string colour ;
    void fruit_price()
    {
        cout << "the fruit price is 100rs/kg" << endl;
    }
    void fruit_colour()
    {
        cout << "the fruit colour is red" << endl;
    }
    void fruit_name()
    {
        cout << "the fruit name is apple";
    }
};
int main()
{
    fruit myfruit;
    myfruit.fruit_price();
    myfruit.fruit_colour();
    myfruit.fruit_name();
}