#include <iostream>
using namespace std;
int main(){
    const int Size = 10;  
    int arr[Size];    
    cout << "Enter 10 integers:" << endl;
    for (int i= 0; i<Size; i++) {
        cout << "Enter an integer " <<i<< ": ";
        cin >>arr[i];
    }
    cout << "\nArray in reverse order:" << endl;
    for (int i = Size-1; i>=0; i--) {
        cout <<arr[i] << " ";
    }
    cout << endl;
    return 0;
}