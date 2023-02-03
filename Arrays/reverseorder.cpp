#include<iostream>
using namespace std ; 

int main(){
    // i/p 3 5 6 4 7 8 2 9 0 1 
    // o/p 1 0 9 2 8 7 4 6 5 3 

    // int arr[10]={3, 5, 6, 4, 7, 8, 2, 9, 0, 1 };
    // int tb = sizeof(arr)/sizeof(int);//(40/4 =10)

    //input from user
    int arr[100];
    cout<<sizeof(arr)<<endl; //400
    int n ; 
    cin>>n; 
    for(int i = 0 ; i<=n-1 ; i= i+1){
        cin>>arr[i];
    }

    //output
    for(int i = n-1 ; i>=0 ; i= i-1){
        cout<<arr[i]<<" ";
    }


}