#include<iostream>
using namespace std;
float area(float r)
{
    return (3.14*r*r);
}
float area(float l,float b)
{
    return(l*b);
}
float area(float b,float h,float t)
{
    return(b*h*t);
}
int main()
{
    float l,b,h,r,t;
    int c;
    do
    {
        cin>>c;
        switch(c)
        {
        case 1:
        {
            cin>>r;
            cout<<"choice ="<<c<<endl;
            cout<<"Area of a circle is :"<<area(r)<<"0";
            break;
        }
        case 2:
        {
            cin>>l>>b;
            cout<<"choice ="<<c<<endl;
            cout<<"Area of a rectangle is :"<<area(l,b);
            break;
        }
        case 3:
        {
            cin>>b>>h>>t;
            cout<<"choice ="<<c<<endl;
            cout<<"Area of a Triangle : "<<area(b,h,t)<<"0";
            break;
        }
        case 4:
            exit(0);
        }
    }
    while(c!=0);
    return 0;
}

