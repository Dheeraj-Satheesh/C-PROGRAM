#include<iostream>
using namespace std;
class sample_FO
{
    public:

    // function with 1 int parameter
    void func(int x)
    {
        cout << "value of x is " << x << endl;
    }

void func(double x)
    {
        cout << "value of x is " << x << endl;
    }

 void func(int x, int y)
    {
        cout << "value of x and y is " << x << ", " << y << endl;
    }
};
int main() {

     sample_FO obj1;

     obj1.func(7);

     obj1.func(9.132);

    obj1.func(85,64);
    return 0;
}

