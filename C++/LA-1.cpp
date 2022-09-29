#include<iostream>
using namespace std;
class staff
{
public:
    char code[50];
    char name[50];
public:
    void setdata()
    {
        cin>>code;
        cin>>name;
    }
    void display()
    {
        cout<<"EMPCODE : "<<code<<endl;
        cout<<"EMPNAME : "<<name<<endl;
    }
};
class teacher:public staff
{
public:
    char sub[50];
    int pub;
public:
    void setdata1()
    {
        cin>>sub;
        cin>>pub;
    }
    void display1()
   {
       cout<<"EMPSUB  : "<<sub<<endl;
       cout<<"EMPPUBL : "<<pub<<endl;
   }
};
class typist:public staff
{
public:
    int speed;
public:
    void setdata2()
    {
        cin>>speed;
    }
    void display2()
    {
        cout<<"EMPSPEED: "<<speed<<" WORDS/MIN"<<endl;
    }
};
class regular:public typist
{
public:
    int sal;
public:
    void setdata3()
    {
        cin>>sal;
    }
    void display3()
    {
        cout<<"EMPSAL  : "<<sal<<endl;
    }
};
class officer:public staff
{
public:
    char grade[50];
public:
    void setdata4()
    {
        cin>>grade;
    }
    void display4()
    {
        cout<<"EMPGRADE: "<<grade<<endl;
    }
};
int main()
{
    staff s;
    teacher t;
    typist r;
    regular e;
    officer o;
    s.setdata();
    t.setdata1();
    r.setdata2();
    e.setdata3();
    o.setdata4();
    s.display();
    t.display1();
    r.display2();
    e.display3();
    o.display4();
    return 0;
}
