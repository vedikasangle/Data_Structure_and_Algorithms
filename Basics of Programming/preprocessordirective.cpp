#include<iostream>
using namespace std ;

//macros
#define pi 3.14
#define pii 2.14+1 //==> this is taken as it is, it is not evaluated ; 
#define piii (2.14+1) ///BODMAS RULE

#define H  cout<<"circumference of circle is "<< 


int main(){
    // circumference of circle is --> 2*pi*r;
    int r = 2 ;

    // float pi = 3.14;
    
    //cout<<"circumference of circle is "<<2*pi*r<<endl;
    H 2*pi*r<<endl;
    
    cout<<"circumference of circle is "<<2*pii*r<<endl;
    
    cout<<"circumference of circle is "<<2*piii*r<<endl;
  
}