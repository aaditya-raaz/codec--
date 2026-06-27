#include<iostream>
using namespace std;

void shorting(int arr[], int size ){
    for(int i=0; i<size; i++){
        //we can aslo declear int i=0 and i<size-1;
        // and j=0; j<size-i-1;
        for(int j=0; j<size-i; j++){
           if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
           } 
        }
    }
}


int main(){
    int arr[]={7,9,1,2,4};
    int n=5;
     shorting(arr,5);
    cout<<"Shorted Array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}