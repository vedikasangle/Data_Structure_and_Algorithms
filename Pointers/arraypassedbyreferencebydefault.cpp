#include<iostream>
using namespace std ;

// void f(int b[], int n ){ // array concept
void f(int *b, int n ){ //pointer concept 
    for(int i = 0 ; i<n ; i++){
        // b[i] = b[i]+10;
        *(b+i)= *(b+i) + 10;
    }
    for(int i = 0 ; i<n ; i++){
        // cout<<b[i]<<" ";
        cout<<*(b+i)<<" ";
    }
    cout<<endl;//12 13 11 11 16 
    // return b ; //this is not valid as b is local variable
}

int main(){
    int arr[] = {2,3,1,5,6};
    int n = 5 ;
    //array ka naam is known as internal pointer
    for(int i = 0 ; i<n ; i++){
        // cout<<arr[i]<<" ";//2 3 1 5 6 
        cout<<*(arr+i);
    } 
    cout<<endl;

    f(arr,n);//arr ==> 0x....

    for(int i = 0 ; i<n ; i++){
        // cout<<arr[i]<<" ";//12 13 11 15 16 
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;

    


    return 0 ; 
}