#include <iostream>
using namespace std;
int main()
{
    int menu;
    int balance;
   cout<<"Enter menu (1 to 4)";
   cin>>menu;
    switch(menu){
        case 1:
        int depositamount;
        cout<<"Enter amount to deposit:";
        cin>>depositamount;
        balance=balance+depositamount;
        cout<<"Amount deposit successfully"<<endl;
        break;
        case 2:
        int withdrawamount;
        cout<<"Enter amount to withdraw:";
        cin>>withdrawamount;
        if(withdrawamount<=balance){
         balance-=withdrawamount;
         cout<<"Amount withdraw successfully";
        }else{
            cout<<"Insufficient balance"<<endl;
        }
        break;
        case 3:
        cout<<"Your cirrent balance is:"<<balance<<endl;
        break;
        case 4:
        cout<<"Exit";
        break;
        default:
        cout<<"Invalid";
        break;
    }
    }
}