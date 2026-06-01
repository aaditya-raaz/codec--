#include<iostream>
using namespace std;

int main(){
    /*int n ;
    int sum = 0;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
     cout<<sum<<endl;*/

     // prime number 

     int n ;
     cout<<"Enter the nymber n "<<endl;
     cin>>n;
     for(int i = 2; i<=(n-1); i++){
        if (n%i == 0){
            cout<<" Not prime "<<endl;
            break;
        } else{
            cout<<" prime "<<endl;
             break;
        }
       
     }
    return 0;
}