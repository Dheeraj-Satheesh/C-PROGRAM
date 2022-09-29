#include<iostream>
#include<conio.h>
using namespace std;
class BaseClass
{
public:
    BaseClass()
    {
        cout << "Constructor of the BaseClass : Object Created"<<endl;
    }
    ~BaseClass()
    {
        cout << "Destructor of the BaseClass : Object Destroyed"<<endl;
    }
};
int main ()
{
    BaseClass des;
    getch();
    return 0;
}
