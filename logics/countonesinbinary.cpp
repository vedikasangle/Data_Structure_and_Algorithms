#include<iostream>
using namespace std ; 

int main(){

    //no&1 give last digit
    //no>>1 removes last digit 
    //no of 1's or no of set bits is same thing 
    
    int no;
    cin>>no ; //13 ==> 1101
    int count = 0;


    while(no>0){
    int rem = (no&1) ;//13&1 1101&1-->1 110&1 11&1 1&1
    
    if(rem==1){
        count = count + 1 ;//3
    }
    no = (no>>1); //1101>>1
    } 

    cout<<count<<endl;
}