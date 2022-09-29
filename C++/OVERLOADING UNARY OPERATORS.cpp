#include<iostream>
using namespace std;
class coor
{
    int xcoor, ycoor;
public :
    Coor(int x,int y);
    void operator ++();
    void operator -();
    void display();
};
void main()
{
    coor c(3,5);
    c.display();
    C++;
    c.display();
    -c;
    c.display();
}
    Coor::coor(int x,int y)
    {
        xcoor=x;
        ycoor=y;
    }
    void Coor::operator++()
    {
        xcoor++;
        ycoor++;
    }
    void Coor::operator -()
    {
        xcoor=-xcoor;
        ycoor=-ycoor;
    }
    void Coor::display()
    {
        cout <<" \n X value = " <<xcoor;
        cout <<" \n Y value = " <<ycoor;
    }
