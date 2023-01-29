#include<iostream>
using namespace std ; 

int main(){

    cout<<(3&4)<<endl;//0
    cout<<(3|4)<<endl;//7
    cout<<(~5)<<endl;//-6
    cout<<(9^7)<<endl;//14
    cout<<(5<<2)<<endl;//20
    cout<<(8>>2)<<endl;//2


    //compound assignment operator
    int x = 90 ; 
    // x = x-34; //this is same as below
    x-= 34 ;
    cout<<x<<endl; 
    
    int y = 90 ; 
    y = y + 10;
    y+=10;
    cout<<y<<endl;


    int z = 2 ; 
    z = z*2;
    z*= 2 ; 
    cout<<z<<endl;


    return 0 ;
}