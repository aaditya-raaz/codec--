#include<iostream>
using namespace std;

int main(){

    // if else statement 

  /*  int a;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    
    int b;
    cout<<"Enter the value of b "<<endl;
    cin>>b;

    if(a>b){
        cout<<"a is greater than b"<<endl;
    } else {
        cout<<"b is greater than a "<<endl;
    }*/

   /* int a = 2;
    int b = a+1;

    if ((a=3)==b){
        cout<<a;
    } else{
        cout<<a+1;
    }*/

   /* char ch ;
    cout<<"Enter the characetr "<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"It is Lowercase "<<endl;
    } else if(ch>='A' && ch<='Z'){
        cout<<"It is Uppercase "<<endl;
    } else {
        cout<<"It is numeric "<<endl;
    }*/
    // using loop 
    // W
    
    //wAP to find sum of all even numbers 
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int sum = 0;
    int i = 2;
    while(i<=n){
        sum +=i;
        i+=2;
    }
     cout<<"Sum of all even number is : "<<sum<<endl;
    return 0;
}