#include<iostream>
using namespace std;
class Test
{
private:
    int x;
public:
    void setX (int a)
    {
        this->x = a;
    }
    void print()
    {
        cout << "x = " << x << endl;
    }
};
int main()
{
    Test obj;
    int num = 20;
    obj.setX(num);
    obj.print();
    return 0;
}
