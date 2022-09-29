#include <iostream>
#include <string.h>
using namespace std;
class employee
{
    public:
        int ENO,SALARY;
        char ENAME[20],EDEPT[20];
        void getdata();
        void putdata();
};
void employee::getdata()
{
    cin>>ENO;
    cin>>ENAME;
    cin>>EDEPT;
    cin>>SALARY;
}
void employee::putdata()
{
    cout<<ENO;
    cout<<" "<<ENAME;
    cout<<" "<<EDEPT;
    cout<<" "<<SALARY;
    cout<<endl;
}
int main()
{
    int N;
    cin>>N;
    employee emps[50];
    for(int i=0;i<N;i++)
    {
        emps[i].getdata();
    }
    for(int i=0;i<N;i++)
    {
        if(strcmp((emps[i].EDEPT),"MARKETING")==0 && emps[i].SALARY<15000)
            emps[i].putdata();
    }
    return 0;
}
