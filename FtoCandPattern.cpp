#include<iostream>
using namespace std;

//Fahrenhrit to celsius
int main(){
    /*float F;
    cout <<"Enter the temprature in Fahrenheit: "<<endl;
    cin>>F;
    float c = (F-32)*5/9;
    cout<<"The teprature in Celsius is : "<<c<<endl;*/

    // square pattern

/*int n;
cout<<"enter the value of n :"<<endl;
cin>>n;
int i =1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<"*";
        j++
        ;
    }
    cout<<endl;
    i++;
}*/

// number pattern

/*int n ;
cin>>n;
int i = 1;
int count = 1;
while(i<=n){
    int j =1;
    while(j<=n){
        cout<<count<<" ";
        count++;
        j++;
    }
    cout<<endl;
    i++;
}*/

// trinagelular pattern

/*int n;
cin>>n;
int i = 1;
while(i<=n){
    int j = n;
    while(j>=i){
        cout<<"*";
        j--;
    }
    cout<<endl;
    i++;
}*/
int a = 1;
int  b= 2;
if(a-->0 && ++b>2){
    cout<<"stage1 - Inside if ";
} else{
    cout<<"stage2 - Inside else ";
}
cout<<a<<" "<<b<<endl;
    return 0;
}