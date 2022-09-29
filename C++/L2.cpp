#include<iostream>
using namespace std;
class building
{
public:
    int floors;
    int rooms;
    int area;
public:
    void setdata()
    {
        cin>>floors;
        cin>>rooms;
        cin>>area;
    }
    void display()
    {
        cout<<"NUMBER OF FLOORS : "<<floors<<endl;
        cout<<"NUMBER OF ROOMS  : "<<rooms<<endl;
        cout<<"TOTAL SQR FEET   : "<<area<<" SQ.FT"<<endl;
    }
};
class house:public building
{
public:
    int bedrooms;
    int bathrooms;
public:
    void setdata1()
    {
        cin>>bedrooms;
        cin>>bathrooms;
    }
    void display1()
    {
        cout<<"NUMBER OF BED ROOMS  : "<<bedrooms<<endl;
        cout<<"NUMBER OF BATH ROOMS : "<<bathrooms<<endl;
    }
};
class office:public building
{
public:
    int fire_ext;
    int telephone;
public:
    void setdata2()
    {
        cin>>fire_ext;
        cin>>telephone;
    }
    void display2()
    {
        cout<<"NUMBER OF FIRE EXT   : "<<fire_ext<<endl;
        cout<<"NUMBER OF TELEPHONES : "<<telephone<<endl;
    }
};
int main()
{
    building a;
    house h;
    office o;
    a.setdata();
    h.setdata1();
    o.setdata2();
    a.display();
    h.display1();
    o.display2();
    return 0;
}
