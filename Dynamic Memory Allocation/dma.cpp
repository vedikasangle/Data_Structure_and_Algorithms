#include<iostream>
using namespace std;


int main(){

    //sma 
    int x ; 
    x = 10 ; 

    //dma 
    int *aptr = new int; //pointer creation star 
    *aptr = 10; //derefer star
   
    cout<<*aptr<<endl;

    //to destroy a variable created dynamically 
    //delete keyword is used
    //! syntax : delete pointername

    delete aptr ;//delete the memory that aptr is pointing towards ;delete the link 
    aptr = NULL;
    cout<<*aptr<<endl;

    

    float f ; 
    f = 89.34 ;

    float* fptr = new float ;
    *fptr = 89.34;
    cout<<*fptr<<endl;
    delete fptr ; 
    fptr = NULL; 


    return 0;
}
