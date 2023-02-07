#include<iostream>
using namespace std ; 

int fact(int a){
    int ans = 1 ;


    
    int i = a ;//initialisation
    while(i>=1){
        ans = ans * i ;
        i = i -1 ;
    }
    return ans ; 

}

// void ncr(int n , int r ){**
int ncr(int n , int r ){
    // fans = n!/(r!*(n-r)!)

    // n! ==fact(n)
    int fans = fact(n)/(fact(r)*fact(n-r));
    
    // cout<<fans<<endl;**

    return fans ;
}


int main(){

    int n , r ; 
    cin>>n>>r; 
    
    // ncr(n,r);**
    cout<<ncr(n,r);

    return 0 ; 

}