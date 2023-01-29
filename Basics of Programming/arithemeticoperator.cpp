#include<iostream>
using namespace std ; 

int main(){
    //pre increment
    int a = 39;
    int b = ++a ;
    cout<<a<<endl;
    cout<<b<<endl;


    //post increment 
    int x = 53; 
    int y = x++;
    cout<<x<<endl;
    cout<<y<<endl;

    //pre decrement
    int p = 30 ; 
    int q = --p;
    cout<<p<<endl;
    cout<<q<<endl;

    //post decrement
    int r = 93;
    int s = r--;
    cout<<r<<endl;
    cout<<s<<endl;


    return 0 ; 
}