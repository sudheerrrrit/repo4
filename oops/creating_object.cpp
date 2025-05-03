#include<iostream>
using namespace std ;
class man{
   // public:
   int age;
   char name[20];
   void printage()
   {
    cout << age << "this can be in the function ";
   }
};
int main()
{
    man sudheer ;
    cout << "the class is created ";
    cout << sizeof(sudheer) << endl;
    cout << sizeof(man);
    //cout << sudheer.age ;
}