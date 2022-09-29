#include<iostream>
using namespace std;
class coor
{
    int xcoor, ycoor;
public :
    coor() { }
    coor(int x,int y);
    friend coor operator +( coor, coor );
    void display();
};
int main()
{
    coor A,B,C;
    A=coor(4,5);
    B=coor(3,3);
    C= A+B;
    A.display();
    B.display();
    C.display();
    return 0;
    }
    coor::coor(int x, int y)
{
    xcoor=x;
    ycoor=y;
}
coor operator+(coor a, coor b)
{
    coor t;
    t.xcoor= a.xcoor + b.xcoor;
    t.ycoor= a.ycoor + b.ycoor;
    return(t);
}
void coor::display()
{
    cout <<"\n X axis = " <<xcoor;
    cout <<" \n Y axis = " <<ycoor;
}
