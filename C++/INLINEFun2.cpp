#include<iostream>
using namespace std;
class line
{
public:
    inline float mul(float x,float y)
    {
        float z;
        z=x*y;
        return z;
    }
    inline float cube(float x)
    {
        return(x*x*x);
    }
};
int main()
{
    line obj;
    float val1,val2;
    cout<<"Enter two values:";
    cin>>val1>>val2;
    cout<<obj.mul(val1,val2)<<endl;
    cout<<obj.cube(val1)<<endl;
    cout<<obj.cube(val2)<<endl;
}
