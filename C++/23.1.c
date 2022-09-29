#include<iostream.h>
#include<conio.h>
class DB;
class DM
{
 float meter,centi;
 public:
 void getdata()
 {
  cin>>meter>>centi;
 }
 void display()
 {
  cout<<meter<<" meters and "<<centi<<" centimeter";
 }
 friend void add(DM &,DB &);
};
class DB
{
 float inch,feet;
 public:
 void getdata()
 {

  cin>>feet>>inch;
 }
 void display()
 {
  cout<<"\nThe distance is:";
  cout<<feet<<" feet and "<<inch<<" inch";
 }
 friend void add(DM &,DB &);
};
void add(DM &a,DB &b)
{

  int c=(a.meter*100+a.centi+b.feet*30.48+b.inch*2.54);
  if(c>=100)
  {
   d.meter=c/100;
   d.centi=c%100;
  }
  else
  {
   d.meter=0;
   d.centi=c;
  }
  d.display();
 }

}
void main()
{
 DM a;
 DB b;
 a.getdata();
 b.getdata();
 add(a,b);
}
