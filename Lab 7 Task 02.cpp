#include<iostream>
using namespace std;
int main(){
    const int numbers_of_students=10;
    int hours[numbers_of_students];  
    int Maximumhours= 0;         
    int Studentindex = -1;    
    for (int i = 0; i<numbers_of_students; i++) {
        cout << "Enter hours studied by student " <<i<< ": ";
        cin >> hours[i];
        if (hours[i] >Maximumhours) {
            Maximumhours = hours[i];
            Studentindex = i;
        }
    }
    cout << "Number of hours studied by each student:\n";
    for (int i = 0;i<numbers_of_students; i++) {
        cout << "Student " << i<< ": " << hours[i] << " hours"<<endl;;
    }
    cout << "Student "<<Studentindex<<"studied the most with "<<Maximumhours<<" hours."<<endl;

    return 0;
}