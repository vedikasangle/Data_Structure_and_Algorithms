#include<iostream>
using namespace std ; 

int main(){
    int a = 1 ;
    int b = -1 ; 
    int c = 0 ; 
    int d = 2 ; 
    if(a++ && ++b && c-- && d++){
        cout<<"Hello"<<endl;
    }
    else if (--a && b++ && d--){
        cout<<"world"<<endl;
    }
    else if(--d && --b && a++){
        cout<<"coding blocks"<<endl;
    }
    else{
        cout<<"Hiii"<<endl;
    }
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    
}