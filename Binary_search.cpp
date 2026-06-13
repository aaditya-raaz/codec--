#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start +  (end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        } if (key>arr[mid]){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start+(end-start)/2;

    }
    return -1;
}

int main(){
    int even[]={2, 5, 8, 9, 10, 11};
    int odd[]={6, 7, 8, 9, 25};

    int evenindex=binarysearch(even, 6, 2);
    cout<<" The index value of 2 is: "<<evenindex<<endl;

    int oddindex=binarysearch(odd, 5, 25);
    cout<<" The index of value of 25 is: "<<oddindex<<endl;

    return 0;
}