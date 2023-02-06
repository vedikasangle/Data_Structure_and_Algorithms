#include<iostream>
using namespace std ;

int main(){ 
    int arr[] = {5,1,2,3,4};
    int tb = sizeof(arr)/sizeof(int);
    
    for(int i = 1; i<=tb-1 ; i++){
    cout<<i<<endl; //loop runs 2 times 
    bool kyaswaphua = false;
    //for taking one particular element to its right position 
    for(int j = 0 ; j<=tb-1-i; j= j+1 ) {  //why not j<=tb -2
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            kyaswaphua = true;
        }
    }
    //*****  
    if(kyaswaphua == false){
        break;
    }
    }

    for(int i = 0 ; i <=tb - 1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0 ; 
}