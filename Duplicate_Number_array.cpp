#include<iostream>
using namespace std;

int Duplicate(int arr[],int size){
    for(int i=0; i<size; i++){
        for(int j=i+1;  j<size; j++){
            if(arr[i]==arr[j])
            return arr[i];
        }
    }
    return -1;
}

int main (){
    int n;
    cout<<" Enter the size of array: ";
    cin>>n;
    cout<<" Enter the element: ";
    int num[n];
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
    cout<<" The duplicate is "<<Duplicate(num,n);
    return 0;
}