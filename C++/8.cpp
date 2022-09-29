#include<iostream>
using namespace std;
class time
{
    int hours;
    int minutes;
public:
    void gettime( int h, int m)
    {
        hours=h;
        minutes=m;
    }
    void puttime(void)
    {
        cout<< hours << "Hours and ";
        cout<< minutes<<"Minutes"<< endl;
    }
    void sum( time, time);   // object as argument
};
void time::sum(time t1, time t2)
{
    minutes = t1.minutes+t2.minutes;
    hours = minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;
}
int main()
{
    time t1,t2,t3;
    t1.gettime(2,45);
    t2.gettime(3,30);
    t3.sum(t1,t2);
    cout<<"T1="<<t1.puttime();
    cout<<"T2="<<t2.puttime();
    cout<<"T3="<<t3.puttime();
    return 0;
}
