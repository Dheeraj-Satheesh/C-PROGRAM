#include<iostream>
using namespace std;
class A
{
    int n,c,r,arm;
public:
    A()
    {
        arm=0;
    }
    void setData()
    {
        cout<<"Enter a number "<<endl;
        cin>>n;
    }
    void getData()
    {
        c=n;
        while(n>0)
        {
            r=n%10;
            arm=(r*r*r)+arm;
            n=n/10;
        }
        if(c==arm)
            cout<<"The given no is Armstrong"<<endl;
        else
            cout<<"The given no is not an Armstrong"<<endl;
    }
};
int main()
{
    A obj;
    obj.setData();
    obj.getData();
    return 0;
}
