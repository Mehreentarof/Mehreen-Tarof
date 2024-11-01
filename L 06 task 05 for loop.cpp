#include<iostream>
using namespace std;
int main(){
    int row=5;
    int seat_number=10;
    for(int i=1; i<=row; i++){
        cout<<"Row:"<<i<<endl;
        for(int j=1; j<=seat_number; j++){
            cout<<"seat_number:"<<j<<endl;
        }
    }
    return 0;
}