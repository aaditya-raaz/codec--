#include<iostream> 
 using namespace std;

 int firstocc(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        } else if(key>arr[mid]){
            e = mid -1;
        } else {
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
 }

 int lastocc(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            ans =mid;
            s=mid+1;
        } else if(key>arr[mid]){
            e=mid-1;
        } else {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
 }


 int main (){
    int box[11]={0, 1, 4, 5, 6, 8, 8, 9, 9, 10, 12};

    cout<<" The first occurrence of 8 of index is: "<<firstocc(box, 11, 8)<<endl;
    cout<<" The last occurrence of 8 of index is: "<<lastocc(box, 11, 8)<<endl;

    // for finding to the total number of occurrence we 
    // total = (last occ - first occ)+1

    return 0;

 }