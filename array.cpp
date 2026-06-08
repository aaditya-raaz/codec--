#include<iostream>
using namespace std;
void printingarray(int arry[], int size){
    for(int i=0; i<size; i++){
        cout<<arry[i]<<" ";
    }
    cout<<"Printing Done "<<endl;
}

int main(){
    int first[10]={1,5,9,3,8,53,10,11,15,20};
    int n=10;
    printingarray(first,10);

    int fifth[20]={1,5,6,3,8,};
     n=20;
    printingarray(fifth,20);

    return 0;
}