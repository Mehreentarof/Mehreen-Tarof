#include<iostream>
using namespace std;
int main(){
    char Grade;
    cout<<"Enter grade words"<<endl;
    cin>> Grade;
    switch(Grade){
        case 'A':
        cout<<" Excellent";
        break;
        case 'B':
        cout<<" Good";
        break;
        case 'C':
        cout<<" satisfactory";
        break;
        case 'D':
        cout<<" Poor";
        break;
        case 'F':
        cout<<" Fail";
        break;
        default:
        cout<<"Invalid ";
        break;
        
    }
}