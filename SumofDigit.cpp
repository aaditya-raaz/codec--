#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum = 0;
    while(n!=0){
        int digit = n%10;
        sum = sum +digit;
        n = n/10;
    }
    cout<<"The sum of  the digits is: "<<sum<<endl;
     return 0;
}