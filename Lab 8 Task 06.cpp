#include<iostream>
using namespace std;
int main(){
    char color;
    cout<<"Enter color(R for Red,Y for Yellow,G for Green) ";
    cin>>color;
    switch(color){
        case 'R':
        cout<<"Stop "<<endl;
        break;
        case 'G':
        cout<<"Go "<<endl;
        break;
        case 'Y':
        cout<<"Slow down "<<endl;
        break;
        default:
        cout<<"Invalid";
        break;
    }
}