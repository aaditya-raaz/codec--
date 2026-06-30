#include<iostream>
using namespace std;

bool insertion(int arr[], int n){
    int i=1;
    while(i<n){
    int temp=arr[i];
      int j=i-1;
    while(j>=0 && arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
    i++;
   }
}

int main(){
    int arr[]={2,6,5,9,8};
    int n=5;
    insertion(arr,n);

    cout<<" shorted array is ";
    for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
    }
    return 0;
}