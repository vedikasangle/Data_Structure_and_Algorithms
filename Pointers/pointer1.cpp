//we should never put garbage in pointer 

#include<iostream>
using namespace std ; 

int main(){
    int r = 2 ; 
    // int*rptr = &r;//rptr stores address of first byte of r 
    
    // int *rptr;  //Garbage address goes in this
    //only create pointer, but not put value 

    int *rptr = NULL; //this gives segmentation fault
    //this can also be written as 
    int *rptr = 0 ; 
    // cout<<2*3.14*r<<endl;//12.56
    cout<<2*3.14*(*rptr)<<endl; //12.56







    return 0 ; 
}