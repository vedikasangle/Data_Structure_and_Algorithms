#include<iostream>
using namespace std ; 

int powerab(int a ,int b ){
    //base case 
    if(b==0){
        return 1 ;
    }

    //recursive case 
    return a*powerab(a,b-1);//16
}


int main(){
    int a, b ;
    cin>>a>>b;

    cout<<powerab(a,b)<<endl;

    return 0 ; 
}