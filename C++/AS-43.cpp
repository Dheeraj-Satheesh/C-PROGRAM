#include <iostream>
using namespace std;
class String
{
    string str;
public:
    void get()
    {
        cin>>str;
    }
    int operator<(String a)
    {
        if(str<a.str)
            return 1;
        else
            return 0;
    }
    int operator>(String a)
    {
        if(str>a.str)
            return 1;
        else
            return 0;
    }
    int operator==(String a)
    {
        if(str==a.str)
            return 1;
        else
            return 0;
    }
};
int main()
{
    String s1,s2;
    s1.get();
    s2.get();
    if (s1<s2)
        cout<<"String s1 is smaller than String s2"<<endl;
    else if (s1>s2)
        cout<<"String s2 is smaller than String s1"<<endl;
    else if (s1==s2)
        cout<<"Both the Strings s1 and s2 are Equal"<<endl;
    return 0;
}
