#include<iostream>
using namespace std ; 

int main(){
    char ch ;
    cin>>ch ; 

    // if(ch=='A'){
    //     cout<<"apple"<<endl;
    // }
    // else if(ch=='D'){

    // }

    switch(ch){
        case 'A': cout<<"apple"<<endl;
        break;
        case 'B': cout<<"bat"<<endl;
        break;
        case 'C': cout<<"cat"<<endl;
        break;
        case 'D': cout<<"dog"<<endl;
        break;
        default : cout<<"Hello"<<endl;
    }

    return 0 ;
}