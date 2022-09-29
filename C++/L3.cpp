#include<iostream>
using namespace std;
class person
{
public:
	char name[20];
	int code;
public:
	void getdata()
	{
	    cin>>name;
	    cin>>code;
	}
	void display()
	{
		cout<<"NAME : "<<name<<endl;
		cout<<"CODE : "<<code<<endl;
	}
};

class account : public virtual person
{
public:
	int pay;
public:
	void getdata1()
	{
		cin>>pay;
	}
	void display1()
	{
		cout<<"PAY  : "<<pay<<endl;
	}
};
class admin : public virtual person
{
public:
	int exp;
public:
	void getdata2()
	{
		cin>>exp;
	}
	void display2()
	{
		cout<<"EXPERIENCE : "<<exp<<" YRS"<<endl;
	}
};
class master : public account,public admin
{
public:
	void display3()
	{
	    display();
	    display1();
	    display2();
	}
};
int main()
{
	master m;
	m.getdata();
	m.getdata1();
	m.getdata2();
	m.display3();
	return 0;
}
