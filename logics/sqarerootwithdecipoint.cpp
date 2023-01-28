#include<iostream>
using namespace std ; 

int main(){
    int no ; 
    cin>>no;

    float i = 0 ; 

    while(i*i<=no){ //3*3<=13 --yes   4*4 <= 13(noo)
        i = i + 1 ;  //1 2 3 4 
    }
    //when i comes out of loop its value is 4 
    i  = i -1 ; //3 = 4 - 1 ==>hence 3 

    //pehle decimal point ke liye  
    while(i*i<=no){ //3*3<=13 3.1*3.1<=13 3.2*3.2<=13 ...3.6*3.6<=13 3.7*3.7<=13(noo)
        i = i + 0.1; //3.1 3.2 3.3......3.7
    } //..hence i came out of loop and it is now 3.7
    i = i - 0.1 ; //3.6 = 3.7 - 0.1 ==> hence 3.6

    //second decimal point ke liye
    while(i*i<=no){ //3.6*3.6<=13 3.61*3.61<=13(moo)
        i = i + 0.01; //3.61
    }//hence i came out of loop and is now 3.61
    i = i - 0.01 ; //3.60 = 3.61 - 0.01  ==>hence 3.60

    //third decimal point 
    while(i*i<=no){//3.60*3.60<=13 3.601*3.601<=13...3.605*3.605<=13 3.606*3.606<=13(nooo)
        i = i + 0.001; //3.601....3.605 3.606
    }//hence i came out of loop and is now 3.606
    i = i - 0.001 ; //3.605 = 3.606 - 0.001 ==> hence 3.605
    
    cout<<i<<endl;


}