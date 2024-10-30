#include<iostream>
using namespace std;
int main(){
    int sub;
    int marks;
    int total_marks;
    char grade;
    cout<<"Total number of subject:";
    cin>>sub;
    for(int i=1; i<=sub; i++){
        cout<<"Enter marks of subjects "<<i<<" ";
        cin>>marks;
    }
    if(marks >=90){
    cout<<"Grade A"<<endl;
    }else if(marks>=75 && marks<=89){
        cout<<"Grade B"<<endl;
    }else if(marks>=50 && marks<=74){
        cout<<"Grade C"<<endl;
    }else{
        cout<<"Grade F"<<endl;
    }
    return 0;
}
    