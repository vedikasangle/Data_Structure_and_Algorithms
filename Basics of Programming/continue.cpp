#include<iostream>
using namespace std ; 

int main(){

    for(int i = 0 ; i <=10 ; i= i +1 ){
        // if(i==3){
        //     continue;
        // }
        if(i==3 || i==7){
            //cout<<"heyyy"<<" ";
            continue; //continue execute hota hai, access wapas updation pe jata hai
        }
        cout<<i<<" ";

    }


    return 0 ; 
}