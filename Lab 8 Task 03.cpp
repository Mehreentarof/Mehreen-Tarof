#include<iostream>
using namespace std;
int main(){
    string Text;
    cout<<"Enters single alphabat chatacters "<<endl;
    cin>>Text;
    char y;
    cout<<"Enter vowels"<<endl;
    cin>> y;
    switch(y){
        case 'a':
        cout<<"a is vowel";
        break;
        case 'A':
        cout<<"A is vowel";
        break;
        case 'e':
        cout<<"e is vowel";
        break;
        case 'E':
        cout<<"E is vowel";
        break;
        case 'i':
        cout<<"i is vowel";
        break;
        case 'I':
        cout<<"I is vowel";
        break;
        case 'o':
        cout<<"o is vowel";
        break;
        case 'O':
        cout<<"O is vowel";
        break;
        case 'u':
        cout<<"u is vowel";
        break;
        case 'U':
        cout<<"U is vowel";
        break;
        default:
        cout<<"Not vowel";
        break;
    }
}