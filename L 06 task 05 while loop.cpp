#include<iostream>
using namespace std;
int main(){
    int row=5;
    int seat_number=10;
    int i=1;
    while(i<=row){
        cout<<"Row:"<<i<<endl;
        int j=1;
        while(j<=seat_number){
            cout<<"seat_number:"<<j<<endl;
            j++;
        }
        i++;
    }
    return 0;
    }