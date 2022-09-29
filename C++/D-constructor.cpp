#include<iostream>
using namespace std;
class Marks
{
public:
    int maths;
    int science;

    Marks()
    {
        maths=0;
        science=0;
    }
    void display()
    {
        cout << "Maths :  " << maths <<endl;
        cout << "Science :" << science << endl;
    }
};
int main()
{
    Marks m;
    m.display();
    return 0;
}
