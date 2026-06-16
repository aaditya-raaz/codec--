#include<iostream>
using namespace std;

long long int sqrtInteger(int n){
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

double morePrecision(int n, int precision, int solution){
    double factor = 1;
    double ans = solution;
    for(int i=0;  i<precision; i++){
        factor= factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<" Enter the number: ";
    cin>>n;
    int solution = sqrtInteger(n);

    cout<<" The sqrt is "<<morePrecision(n,3,solution)<<endl;
    return 0;
}