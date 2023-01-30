#include<iostream>
using namespace std ; 

int main(){
    int a = 10 ;
    float b = 45.34;
    int c = 80;
    if(a>=5){
        int d = 80;
        int b = 30;
        cout<<a<<endl;//10
        cout<<b<<endl;//30
        cout<<c<<endl;//80
        cout<<d<<endl;//80
    }
    if(c<=100){
        int e = 56 ; 
        a = a + 34; //***updated main a as 44***
        cout<<a<<endl;//44(10 + 34)
        cout<<b<<endl;//45.34
        cout<<c<<endl;//80
        // cout<<d<<endl;//error
        cout<<e<<endl;//56
    }
    cout<<a<<endl;//44
    cout<<b<<endl;//45.34
    cout<<c<<endl;//80
    // cout<<d<<endl;//error
    // cout<<e<<endl;//error
}