#include<iostream>
using namespace std;
class Marks
{
public:
    int maths;
    int science;
    Marks(int mark1,int mark2)
    {
        maths = mark1;
        science = mark2;
    }
    void display()
    {
        cout << "Maths :  " << maths <<endl;
        cout << "Science :" << science << endl;
    }
};
int main()
{
    Marks m(90,85);
    m.display();
    return 0;
}
