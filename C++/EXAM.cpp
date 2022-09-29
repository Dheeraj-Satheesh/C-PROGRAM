#include <iostream>

using namespace std;

 class Point

{   int x, y;

public:

   Point(const Point &p) { x = p.x; y = p.y; }

   int getX() { return x; }

   int getY() { return y; }

};

  int main()

{

    Point p1;

    Point p2 = p1;

    cout << "x = " << p2.getX() << " y = " << p2.getY();

    return 0;

}
