#include<iostream>
using namespace std;

long long int bianrysearch(int n){
    int s = 0;
    int e = n;
    long long int ans = -1;
    long long int mid = s+(e-s)/2;
    while(s<=e){
       // long long int mid = s+(e-s)/2;
        long long int square = mid*mid;
        if(square>n){
            e = mid-1;
        } else if(square<n){
            ans=mid;
            s = mid+1;
        } else {
            return  mid;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int sqrt;
    cout<<" Enter the number: ";
    cin>>sqrt;

    cout<<" The sqrt is "<<bianrysearch(sqrt)<<endl;
    return 0;
}