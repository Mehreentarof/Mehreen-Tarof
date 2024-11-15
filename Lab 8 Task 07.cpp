#include<iostream>
using namespace std;
int main(){
    int month;
    cout<<"Enter months number (1 to 12):";
    cin>>month;
    switch(month){
        case 12:
        case 1:
        case 2:
        cout<<"Winter(Decenber,January,Februray)";
        break;
        case 3:
        case 4:
        case 5:
        cout<<"Spring(March,April,May)";
        break;
        case 6:
        case 7:
        case 8:
        cout<<"Summer(June,July,August)";
        break;
        case 9:
        case 10:
        case 11:
        cout<<"Autumn(September,October,November)";
        break;
        default:
        cout<<"Invalid";
        break;
   }
}