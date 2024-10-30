#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    int sum;
    cout<<"Enter a natural number:";
    cin>>n;
    for(i=1; i<=n; i++){
        sum=sum+i;
    }
    cout<<"The sum of the first"<<n<<"Natural number is:"<<sum<<endl;
    return 0;
}