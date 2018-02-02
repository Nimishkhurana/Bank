#include "bankacc.h"
#include<cstring>
#include<iostream>
using namespace std;
double Bank::getaccno()
{
    return(account_no);
}
void Bank::input()
{
    int t;
    cout<<"\nEnter depositor's name:";
    cin>>ws;
    cin.get(depositor_name,20);
    cout<<"Enter account no. :";
    cin>>account_no;
    cout<<"Enter type of account:-\n1.Savings account\n2.Current account\n3.Fix deposit\n";
    cin>> t;
    if(t==1)
        strcpy(acc_type,"Savings account");
    else if(t==2)
        strcpy(acc_type,"Current account");
    else
        strcpy(acc_type,"Fix deposit");
    cout<<"Enter initial balance in the account:";
    cin>>balance;

}
void Bank::deposit()
{
    double amt;
    cout<<"Enter amount to deposit:";
    cin>>amt;
    balance+=amt;
}
void Bank::withdraw()
{
    double amt;
    cout<<"Current balance:"<<balance<<endl;
    cout<<"Enter amount to withdraw:";
    cin>>amt;
    if(amt>balance)
      cout<<"Transanction not possible\nNot enough balance in your account\n";
    else
    {
    cout<<"Withdrawing...Rs"<<amt<<endl;
    balance-=amt;
    cout<<"Now new balance:"<<balance;
    }
}
void Bank::display()
{
    cout<<"Depositor name:"<<depositor_name<<endl;
    cout<<"Balance in the "<<acc_type<<":"<<balance;
    cout<<"\n\n";
}
