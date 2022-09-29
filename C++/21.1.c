#include<iostream>

#include<process.h>

using namespace std;

class Bank

{

//Declaration of data members

public:

char name[20];

char account_type[20];

int account_number;

int balance;

//member functions of the class Bank

// initialize function to initialize data members

void initialize()

{

cout<<"Enter Account Holders Name:";

gets(name);

cout<<"Enter Account type:";

gets(account_type);

cout<<"Enter account number:";

cin>>account_number;

cout<<"Enter balance to deposit:";

cin>>balance;

}

//deposit() function to deposit amount in account

void deposit()

{

int bal;

cout<<"Enter the amout to deposit:";

cin>>bal;

balance+=bal;

cout<<"Amount deposited successfulyYour New Balance:"<<balance;

}

//check() function to withdraw amount and check remaining balance

void check()

{

int bal;

cout<<"Your balance :"<<balance<<"Enter amount to withdraw:";

cin>>bal;

if(bal<=balance)

{

balance-=bal;

puts(name);

cout<<"Remaining Balance:"<<balance;

}

else

{

exit(0);

}

}

//display function to display user information

void display()

{

cout<<"Name :";

puts(name);

cout<<"Balance :"<<balance;

}

};

int main()

{

int i;

//An array of objects of Bank class can be created to handle 10 customers and their data

//as Bank bk[10];

//Then run this array in loop to initialize and access it's data members

Bank bk;

bk.initialize();

cout<<"1. Your Information2. Deposit3. WithdrawEnter your choice";

cin>>i;

if(i==1)

{

bk.display();

}

else if(i==2)

{

bk.deposit();

}

else if(i==3)

{

bk.check();

}

}
