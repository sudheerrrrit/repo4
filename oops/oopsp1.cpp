#include<iostream>
using namespace std ;
class fruit{
    public:
    string name;
   
    string colour;
    
};
int main()
{
    fruit apple;
    apple.name="APPLE";
    apple.colour="red";
    cout << apple.colour << endl ;
    cout << apple.name << endl;
    cout << sizeof(fruit);
    fruit *mango = new fruit();
    mango->name="mango";
    mango->colour="yellow";
    cout << mango->name << "--"<< mango->colour ;
}