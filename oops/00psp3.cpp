#include<iostream>
using namespace std ; 
class man{
    public :
    int age ;
    string name1 ;
    string fathername ;
    string mothername ;
    void name()
    {
        cout << "name is sudheer yadav";
    }
};
int main()
{
    man sudheer ;// sudheer is a object is an instance of class 
    sudheer.name();
}