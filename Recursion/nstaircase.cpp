#include<iostream>
using namespace std;

int nstaircase(int n ){
    //base case 
    if(n<0){
        return 0 ; 
    }
    if(n==0){
        return 1 ; 
    }

    //rec case 
    return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3);
}


int main(){
    int n ; //5
    cin>>n  ; 
    cout<<nstaircase(n);


    
    
    return 0;
}