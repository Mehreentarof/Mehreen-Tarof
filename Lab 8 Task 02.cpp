#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout <<"Enter the number "<<endl;
    cin >> num1 >> num2;
    char opr;
    cout<<"Enter +,-,*,/ "<<endl;
    cin>>opr;
    switch(opr){
        case '+':
        cout<<num1+num2;
        break;
        case '-':
        cout<<num1-num2;
        break;
        case '*':
        cout<<num1*num2;
        break;
        case '/':
        cout<<num1/num2;
        break;
        default:
        cout<<"invalid operation";
        break;
    }
}