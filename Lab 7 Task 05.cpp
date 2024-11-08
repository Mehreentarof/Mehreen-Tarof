#include <iostream>
using namespace std;
int main() {
    int number;
    int Positivenumber=0, Negativenumber=0, Oddnumber=0, Evennumber=0, Zeronumber=0;
    for (int i=0; i<10; i++) {
        cout << "Enter an integer " <<i<< ": ";
        cin >> number;
        if (number>0) {
            Positivenumber++;
        }
        else if (number<0) {
            Negativenumber++;
        }
        else {
            Zeronumber++;
        }
        if (number!= 0) {
            if (number % 2 == 0) {
                Evennumber++;
            } else {
                Oddnumber++;
            }
        }
    }
    cout << "Number of positive numbers: " <<Positivenumber<< endl;
    cout << "Number of negative numbers: " <<Negativenumber<< endl;
    cout << "Number of odd numbers: " <<Oddnumber<< endl;
    cout << "Number of even numbers: " <<Evennumber << endl;
    cout << "Number of zeros: " <<Zeronumber<< endl;

    return 0;
}
