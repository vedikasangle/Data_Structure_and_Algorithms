#include<iostream>
using namespace std ; 

void fertocel(){
    int init,final,step ;
    cout<<"Enter Initial, Final and Step Value : ";
    cin>>init>>final>>step;

    int f = init;

    while(f<=final){
    int c=(5.0/9)*(f-32);
    cout<<f<<'\t'<<c<<endl;
    f = f+step;
    }
    
}

int main(){
    fertocel();

    return 0 ; 

}