#include<iostream>
using namespace std ; 

int main(){
    int arr[] = {5,4,1,2,3} ;
    int tb = sizeof(arr)/sizeof(int);
 
   //smallest element comes on its correct position by default
   //so only compare 4 elements 
    for(int i = 1; i<=tb-1 ; i++){
    //sabse bada element apne jagah pe 4 2 1 3 5 
    for(int j = 0 ; j<=tb-1-i; j= j +1 ) {  //why not j<=tb -2
        if(arr[j]>arr[j+1]){
            //1) swap using formula
            swap(arr[j],arr[j+1]);
            //2) swap using third variable 
            int c = arr[j]; 
            arr[j] = arr[j+1] ; 
            arr[j+1] = c ; 

            //3)swap without using 3rd variable
            arr[j] = arr[j] + arr[j+1];
            arr[j+1] = arr[j] - arr[j+1];
            arr[j] = arr[j] - arr[j+1];

            //4)single line swap 
            arr[j] = (arr[j]+arr[j+1]) - (arr[j+1] = arr[j]);
            //or
            arr[j+1] =(arr[j]+arr[j+1]) - (arr[j] = arr[j+1]);
            
            //5)using xor also possible (not written here)
            // x=x^y;
            // y=y^x;
            // x=x^y;

        }
    }
    }
    //printing the latest loop  
    for(int i = 0 ; i<=tb -1; i++ ){
        cout<<arr[i]<<" ";
    }

    return 0 ; 
}