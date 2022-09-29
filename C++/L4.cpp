#include<iostream>
using namespace std;
class account
{
public:
    string acc_no;
    string cust_name;
    string type;
    int balance;
    char a;
    char d;
    char w;
    int amt;
    void getdata()

    {
        cin>>acc_no;
        cin>>cust_name;
        cin>>type;
        cin>>balance;
    }
};
class check:public account
{
public:
    void getdata1()
    {
        cin>>a;
        cin>>amt;
    }
    void display()
    {
            cout<<"ACC-NO : "<<acc_no<<endl;
            cout<<"CUSNAME: "<<cust_name<<endl;
            cout<<"ACCTYPE: "<<type<<endl;
            cout<<"CURBAL : "<<balance<<endl;
        if (a=='D')
        {
            cout<<"TRAS-TYPE : DEPOSIT"<<endl;
            cout<<"TR-AMT : "<<amt<<endl;
            balance+=amt;
            cout<<"CURBAL : "<<balance<<endl;
        }
        else
        {
            cout<<"TRAS-TYPE : WITHDRAWAL"<<endl;
            cout<<"TR-AMT : "<<amt<<endl;
            balance-=amt;
            cout<<"CURBAL : "<<balance<<endl;
        }
    }
};
int main()
{
    check obj;
    obj.getdata();
    obj.getdata1();
    obj.display();
}
