#include <iostream>
using namespace std;

int main(){
    // datatype namejagahka = value;
    // int p = 10; //initialisation(no scope of garbage)
    // int r = 30 ; //initialisation
    // int t = 100 ; //initialisation

    //int p ; -->garbage value here //declaration 
    // p= 10; --> garbage value ko overwrite kiya //assignment


    int p, r, t;
    // cout<<p; -->garbage value as output

    cout<<"enter p , r and t respectively";
    cout<<endl;
    cin>>p>>r>>t;

    int simpleInterest = (p*r*t)/100;
    cout<<"The simple interest is ";
    cout<<simpleInterest;
    return 0;
}