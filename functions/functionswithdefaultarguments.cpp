#include<iostream>
using namespace std ; 

// int sum(int a, int b){
//     int s = a + b ;
//     return s ; 
// }

// // float sum(float a, int b){
// //     int s = a + b ;
// //     return s ; 
// // }

// int sum(int a, int b , int c){  
//     int s = a + b + c ;
//     return s ; 
// }

// int sum(int a, int b , int c, int d, int e){
//     int s = a + b + c + d + e ;
//     return s ; 
// }

//giving values beforehand is called default arguments 
int sum(int a = 0 , int b = 0 , int c = 0 , int d = 0 , int e = 0 , int f = 0, int g = 0 ){
    int s = a +b+c+d+e+f+g;
    return s ;
}

int main(){
    // cout<<sum(2.2,5)<<endl;
    // cout<<sum(3,4)<<endl;
    // cout<<sum(2,3,4)<<endl;
    // cout<<sum(2,3,4,6)<<endl;  
    cout<<sum(2,3,4,6,5)<<endl;  

    return 0 ; 
}
