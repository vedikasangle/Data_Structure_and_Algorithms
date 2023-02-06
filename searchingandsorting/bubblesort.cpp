#include<iostream>
using namespace std ; 

int main(){
    int arr[] = {5,4,1,2,3} ;
    int tb = sizeof(arr)/sizeof(int);
 
   //smallest element comes on its correct position by default
   //so only compare 4 elements 
    for(int i = 1; i<=tb-1 ; i++){
        cout<<i<<endl; //loop runs 4 times 
    //sabse bada element apne jagah pe 4 2 1 3 5 
    for(int j = 0 ; j<=tb-1-i; j= j +1 ) {  //why not j<=tb -2
        if(arr[j]>arr[j+1]){
            //1) swap using formula
            swap(arr[j],arr[j+1]);
        }
    }
    }
    //printing the latest loop  
    for(int i = 0 ; i<=tb -1; i++ ){
        cout<<arr[i]<<" ";
    }

    return 0 ; 

    //second largest apne position pe 3 2 1 4 5   
    //for(int j = 0; j<=2 ; j = j + 1){
    //         if(arr[j]>arr[j+1]){
    //              swap(arr[j],arr[j+1]);
    //          }
    //  }
     //third largest apne position par 2 1 3 4 5 
    // for(int j = 0 ; j<=1 ;j = j + 1 ){
    //       if(arr[j]>arr[j+1]){
    //          swap(arr[j],arr[j+1]);
    //      }
    // }
    // //forth largest element postion par 1 2 3 4 5 
    // for( int j = 0; j<=0 ; j = j+1){
    //      if(arr[j]>arr[j+1]){
    //         swap(arr[j],arr[j+1]);
    //     }
    // }


 

}
    //my logic
    //int n = ?
    // while(j<n-2){
    //     if(arr[j]>arr[j+1]){
    //         swap(arr[j],arr[j+1]);
    //     }
    //     j = j + 1 ; 
    // }
