#include <iostream>
#include "bankacc.h"

using namespace std;

int main()
{
    int i,size,t,temp;
    double acc;
    cout<<"Enter number of accounts :";
    cin>>size;
    Bank B[size];
    for(i=0;i<size;i++)
    {
        cout<<"\n\nPlease give details of member "<<i+1<<" !";
        B[i].input();
    }
    cout<<"\n\n";
    acc:cout<<"Enter your account number:";
    cin>>ws;
    cin>> acc;
    for(i=0;i<size;i++)
       if(B[i].getaccno()==acc)
          {
              temp=i;
              break;
          }
    if(i==size)
        {
            cout<<"No such account found\nCheck account number and try again\n";
            goto acc;
        }
    do{
    cout<<"\n\nPress 1 to deposit money\nPress 2 to withdraw money\nPress 3 to view account details\nPress 4 to check another account\nPress 0 to exit\n";
    cin>>ws;
    cin>> t;
    switch(t)
    {
    case 1:
        B[temp].deposit();
        break;
    case 2:
        B[temp].withdraw();
        break;
    case 3:
        B[temp].display();
        break;
    case 4:goto acc;
    }
}while(t!=0);
    return 0;
}
