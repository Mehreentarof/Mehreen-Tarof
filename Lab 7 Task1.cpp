#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
//done
int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter value to store in array: ";
        cin>>arr[i];

    }
//done
    
    for( int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}