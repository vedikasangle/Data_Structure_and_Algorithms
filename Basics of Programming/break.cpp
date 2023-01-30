#include<iostream>
using namespace std ;

int main(){

    for (int i = 1 ; i<=10; i = i +1){
        if(i==5){ //1 2 3 4
            break;
        }
        cout<<i<<" ";

        // if(i==5){ //1 2 3 4 5
        //     break;
        // }
    }

 
    return 0 ; 
}