#include<iostream>
using namespace std;
int CountsetBits(int n){
    int count = 0;
    while(n!=0){
        count = count + (n&1);
        n>>=1;
    }
    return count;
}
int main(){
    int a , b;
    cout<<"Enter the number of a and b: ";
    cin>>a>>b;
    int totalsetBits = CountsetBits(a)+CountsetBits(b);
    cout<<"The total number of set bits are: "<<totalsetBits<<endl;
    return 0;
}