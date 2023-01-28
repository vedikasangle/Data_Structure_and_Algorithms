#include<iostream>
#include<cmath>
using namespace std ; 

int main(){
    int no ; 
    cin>>no ;

    int noofdecipoints;
    cin>>noofdecipoints; //3

    float i = 0 ; //ginti 

    float inc = 1 ;

    int times = 1 ; 

    while(times<=noofdecipoints+1){//1<=4 
        while(i*i<=no){ 
        i = i + inc ; 
        } 
        i  = i - inc ; 
        inc = inc/10;;

        times = times + 1 ;
    }

    cout<<i<<endl;



    //sqrt(no)
    cout<<sqrt(9)<<endl;


}