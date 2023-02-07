#include<iostream>
using namespace std ; 

//above main
// void sum(){
//     int a, b ;
//     cin>>a>>b ; 
//     int s = a+b ;
//     cout<<s<<endl;
// } 

//forward declaration (error comes without this)
void sum();

int main(){
    sum();
    return 0 ; 
}

//below main
 void sum(){
    int a, b ;
    cin>>a>>b ; 
    int s = a+b ;
    cout<<s<<endl;
}