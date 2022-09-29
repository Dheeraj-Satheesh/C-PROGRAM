#include<iostream>
using namespace std;
class Circle
{
private :
    double radius;
public:
    Circle()
    {
        radius=10;
    }
    Circle(Circle &t)
    {
        radius = t.radius;
    }
    double getArea()
    {
        return 3.14 * radius * radius;
    }
};
int main()
{
    Circle c1;
    Circle c2(c1);
    cout << c2.getArea()<<endl;
    return 0;
}
