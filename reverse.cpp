#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int result = 0;
    while(n!=0){
        int digit = n%10;
        n = n/10;
        result = result*10 + digit;
    }
    cout<<result<<endl;
    return result;
}