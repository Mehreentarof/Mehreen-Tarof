#include <iostream>
using namespace std;
int main() {
    const int Size= 7;  
    int arr[Size];   
    int Multiple_of_five = 0;  
    cout << "Enter 7 integers:" << endl;
    for (int i = 0; i <Size; i++) {
        cout << "Enter  an integer " <<i<<":";
        cin >>arr[i];
    }
    for (int i = 0; i<Size; i++) {
        if (arr[i] % 5 == 0) {
            Multiple_of_five++;
        }
    }
    cout << "The number of integers that are multiples of 5: " <<Multiple_of_five << endl;
    return 0;
}
