#include<iostream>
using namespace std ;

void update(int x ){ //function declaration
    //function definition *******
    x = x + 30 ; 
    cout<<"Inside Update  : "<<x<<endl;
    // *******
}

int main(){
    int x = 10; 
    cout<<x<<endl;
    update(x); //function call or function invoking

    cout<<"after update funcion : "<<x<<endl;

    return 0 ; 
}

