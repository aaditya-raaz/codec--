#include <iostream>
using namespace std;

int sum(int num[],int n){
    int sum =0;
    for(int i=0; i<n; i++){
        sum = sum + num[i];
    }
    return sum;

}


int main (){
    int size; 
    cout<<"Entre the size of array: ";
    cin>>size;
    int num[100];
    cout<<"Entre the number: ";
    for(int i=0; i<size; i++){
        cin>>num[i];
    }
    cout<<"The sum of array is "<<sum(num, size)<<endl;
    return 0;
}