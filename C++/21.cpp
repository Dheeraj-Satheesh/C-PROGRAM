#include<iostream>
using namespace std;
class item{
    public:
        char itemname[20];
        int numberofitems;
        int item_cost;

        item(){
            cin>>itemname;
            cin>>numberofitems;
            cin>>item_cost;
        }
};
int main()
{
    item a;
    if(a.numberofitems<25 && a.item_cost<750){
        cout<<"NEITHER THE NUMBER OF "<<a.itemname<<" NOR THE COST IS GREATER"<<endl;
    }
    else if(a.numberofitems>=25 && a.item_cost>=750){
        cout<<"THE COST AND THE NUMBER OF "<<a.itemname<<" IS GREATER"<<endl;
    }
    else if(a.numberofitems<25 && a.item_cost>=750){
        cout<<"THE COST OF THE "<<a.itemname<<" IS GREATER THAN Rs.750"<<endl;
    }
    return 0;
}
