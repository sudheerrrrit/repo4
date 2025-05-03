#include<iostream>
using namespace std ;
class man {
    int age ; 
    char name;
    public:
    void setage(int a)
    {
        age = a;
    }
    char setname(char ch){
        name = ch;
    }
    int getage()
    {
        return age ;
    }
    char getname(){
        return name;
    }
};
int main()
{
    man sudheer ;
   cout << "the age is " << sudheer.getage();
   sudheer.setname("sudh");
   cout << "sudheer age is " << sudheer.getname();
}