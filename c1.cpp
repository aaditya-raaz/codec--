#include<iostream>
using namespace std;

int main(){
    /*
    cout<<"hello raaz"<<endl;
*/
// type casting 

float y = 2.5;
int x = (int)y;
cout<<x<<endl;
int a='A';
cout<<a<<endl;
char ch = 100;
cout<<ch<<endl;

// Arthmetic opraters 

double a1=75;
int b1=50;
int sum = a1+b1;
float div = a1/b1;
int div1 = a1/b1;
cout<<div1<<endl;
cout<<sum<<endl;
cout<<div<<endl;

// logic and relational opraters

int c = 10;
int d = 20;
int e = 30;
float f = 60.2;

// relational
cout<<(c>d)<<endl;
cout<<(d>=e)<<endl;
cout<<(e>d)<<endl;

// logical without conditional 
cout<<(c<d && d>e)<<endl;
cout<<(c!=d || d>f)<<endl;


}
