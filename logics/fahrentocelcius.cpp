#include<iostream>
using namespace std ; 

int main(){
    int init,final,step ;
    cin>>init>>final>>step;

    int f = init;//0

    //loop
    while(f<=final){
    // float c=(5.0/9)*(f-32);  -->we dont want float value as ans
    int c=(5.0/9)*(f-32);  //this concept is called explicit typecasting or typechange
    // can also do (5.0/9.0 or 5/9.0);
    cout<<f<<'\t'<<c<<endl;
    f = f+step;//0+20
    }


    return 0 ; 

}