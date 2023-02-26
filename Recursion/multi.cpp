#include<iostream>
using namespace std ; 

int multi(int a ,int b ){
    //base case 
    if(b==0){
        return 0   ;
    }

    //recursive case 
    return a+multi(a,b-1);//16
}


int main(){
    int a, b ;
    cin>>a>>b;

    cout<<multi(a,b)<<endl;

    return 0 ; 
}