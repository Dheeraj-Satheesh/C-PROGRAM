#include<iostream>
using namespace std;
class student
{
  public:
      int rollno;
      void getdata(){
          cin>>rollno;
    }
};
class test
{
  public:
    float sub1;
    float sub2;
    void getmark(){
        cin>>sub1;
        cin>>sub2;
    }
};

class result: public student, public test
{
     public:
         float total;
         void add()
         {
             total=sub1+sub2;
     }
};

int main()
{
    result a;
    a.getdata();
    a.getmark();
    a.add();
    cout<<"Total ="<<a.total;
    return 0;
}
