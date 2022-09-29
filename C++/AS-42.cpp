#include <iostream>
using namespace std;
int main()
{
    int a;
    string op;
    cin >>a>> op;
    if(op=="++")
    {
        a=a+2;
    }
    else if (op == "--")
    {
         a=a-2;
    }
    cout << "N="<<a<<endl;
    return 0;
}
