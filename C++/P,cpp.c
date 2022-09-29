#include<iostream>
using namespace std;
class staff
{
public:
       int c;
       int sal;
      char name[30];
      void get_data()
      {
          cout<<"Enter code name and salary of staff:-";
          cin>>c>>name>>sal;
      }
      void display_data()
      {
          cout<<"code:\t"<<c<<endl<<"name:\t"<<name<<endl<<"salary:\t"<<sal<<endl;
     }
};
class teacher : public staff
{
    public:
           char sub[10];
           char pub[10];
};
class typist : public staff
{
    public:
                 int s;
};
class officer : public staff
{
    public:
              char g;
};
class regular : public typist
{
    public:

};
class casual : public typist
{
    public:
                 int dailywage;
};

int main()
{
    staff s;
    teacher t;
    typist ty;
    officer o;
    regular  r;
    casual c;
    int n;
do{
    cout<<"choose any option given below\n1.teacher\t2.typist\t3.officer:-";
    cin>>n;
    if(n==1)
    {
    cout<<"Enter teacher subject and publication:-";
    cin>>t.sub>>t.pub;
    s.get_data();
    s.display_data();
    cout<<"subject:\t"<<t.sub<<endl<<"publication:\t"<<t.pub<<endl;
    }
    if(n==2)
    {
    cout<<"choose any option given below\n.regular\t2.casual:-";
    cin>>n;
    cout<<"Enter speed of typist:-";
    cin>>ty.s;
    if(n==1)
    {
    s.get_data();
    s.display_data();
    cout<<"speed:\t"<<ty.s<<endl;
    }
    if(n==2)
    {
    s.get_data();
    s.display_data();
    cout<<"speed:\t"<<ty.s<<endl;
    }
    }
    if(n==3)
    {
    cout<<"Enter grade of officer:-";
    cin>>o.g;
    s.get_data();
    s.display_data();
    cout<<"grade:\t"<<o.g<<endl;
    }
    cout<<"choose any one option\n1.continue\t2.exit:-";
    cin>>n;
}while(n==1);
    return 0;
}
