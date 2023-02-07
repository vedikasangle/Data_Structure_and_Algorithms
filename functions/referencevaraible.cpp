#include<iostream>
using namespace std ; 

//here "x" can also be written in place of
//"a" but we are writing "a" to avoid confusion

void update(int &a){ //int &a = x;
    a=a+30;
    cout<<"Inside Update Function : "<<a<<endl;//2
}

int main(){

    int x = 10 ; 
    cout<<x<<endl;//1
    update(x);

    cout<<"After Update Function : "<<x<<endl;//3


    // //reference variable
    // int tony = 10 ; 
    // int &sham = tony;
    // int &abc = tony;

    // tony = tony + 1;
    // cout<<abc<<endl;
    // cout<<sham<<endl;
    // cout<<tony<<endl;


    return 0 ; 

}