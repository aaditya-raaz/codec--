#include <iostream>
using namespace std;

int pivot(int arr[], int n){
    int s = 0;
    int  e = n-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;
        } else {
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s; 
    // we can also return e 
}

int main(){
    int arr[5] = {6, 7, 10, 20, 4};

    cout<<" pivot index is "<<pivot(arr, 5)<<endl;

    return 0;
}