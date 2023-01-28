#include<iostream>
using namespace std ; 


//only for perfect square
int main(){
    int no ; 
    cin>>no;

    int i = 0 ; 
    

    while(i*i<=no){  //0*0<=9;
         i = i + 1 ;
    }  
    cout<<i-1<<endl;



    return 0 ; 
}