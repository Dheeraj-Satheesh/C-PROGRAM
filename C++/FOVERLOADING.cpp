#include<iostream>
using namespace std;
int square(int x)
{
  return x*x;
}
double square(double x)
{
  return x*x;
}
int main()
{
   cout<<square(7)<<endl;
   cout<<square(7.5)<<endl;
}
