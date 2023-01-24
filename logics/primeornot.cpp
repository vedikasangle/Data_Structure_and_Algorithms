#include<iostream>
using namespace std ;

int main(){
    int no ;
    cin>>no;

    int i = 2 ; //initialisation 


    while( i<=no-1){
        if(no%i==0){
            cout<<"not prime"<<endl;
            return 0 ;
        }
        i=i+1;//i++;
    }
    if(i=no){
        cout<<"prime"<<endl;
    }

    return 0 ;
}
