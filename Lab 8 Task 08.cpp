#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter single digit integer(0 to 9) ";
    cin>>number;
    switch(number){
        case 0:
        cout<<"Zero";
        break;
        case 1:
        cout<<"One";
        break;
        case 2:
        cout<<"Two";
        break;
        case 3:
        cout<<"Three";
        break;
        case 4:
        cout<<"Four";
        break;
        case 5:
        cout<<"Five";
        break;
        case 6:
        cout<<"Six";
        break;
        case 7:
        cout<<"Seven";
        break;
        case 8:
        cout<<"Eight";
        break;
        case 9:
        cout<<"Nine";
        break;
        default:
        cout<<"Invalid";
        break;
    }
}