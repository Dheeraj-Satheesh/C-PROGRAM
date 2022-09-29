#include<iostream>
#include <string>
using namespace std;
class ATM
{
public:
   string name;
   int accno;
   string acctyp;
   int balance;
   ATM(string nam,int acno,string actyp,int bal)
   {
      name=nam;
      accno = acno;
      acctyp =actyp;
      balance=bal;
   }
   void display();

};
void ATM::display(){
       char ch;
       int amt;
       int famt;
       int cnt=0;
       cin >> ch;
       cin >> amt;
       if (ch=='D'){
           balance+=amt;
           cnt+=1;
        }
       else if(ch=='W'){
           famt=balance-amt;
           if((acctyp=="SB") && (famt>1000)){
               balance-=amt ;
               cnt+=1;
            }
           else if((acctyp=="CUR") &&(famt>5000)){
               balance-=amt;
               cnt+=1;
            }
        }
        if(cnt==1){
            cout << name << " " << balance;
        }
        else{
            cout << "TRANSACTION DECLINED";
        }
    }
   int main()
{
   string nam;
   char bnk[30];
   int no,bal;
   cin >> nam >> no >> bnk >> bal;
   ATM b1(nam,no,bnk,bal);
   b1.display();
   return 0;
}
