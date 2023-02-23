#include<iostream>
using namespace std ; 

int fact(int n ){//5
    //base case
    if(n==0){
        return 1;
    }

    //recursive case

    //without storing 
    return n*fact(n-1); //fact(n-1) will give right answer is pure assumption 

}

int main(){
    int n ; 
    cin>>n;

    cout<<fact(n)<<endl;


    return 0 ; 
}

//     with storing
//     int chotans = fact(n-1);//fact(4) //pure assumption -->24
//     muje n * chotoans
//     int fans = n*chotans;//5*24 -->120
//     return fans;
