#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=3){
        cout<<"Week:"<<i<<endl;
        int j=1;
        while(j<=7){
          cout<<"Day"<<j<<endl;
          j++;
        }
        i++;   
    }
    return 0;
}