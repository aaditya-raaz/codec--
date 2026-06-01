#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"entre the value of a and b: ";
    cin>>a>>b;
    char opreators;
    cout<<"Enter the opreator: ";
    cin>>opreators;
    switch( opreators ){
        case '+': 
        cout<<"Addition of a and b is: "<< (a+b) <<endl;
        break;
        case '-':
        cout<<"Substraction of a and b is: "<< (a-b) <<endl;
        break;
        case '*':
        cout<<"Multiplication of a and b is: "<< (a*b) <<endl;
        break;
        case '/':
        cout<<"Division of a and b is: "<< (a/b) <<endl;
        break;
        case '%':
        cout<<"Module of a and b is: "<< (a%b) <<endl;
        break;
         default:
         cout<<"Please enter a valid opreator "<<endl;

    }
    return 0;
}