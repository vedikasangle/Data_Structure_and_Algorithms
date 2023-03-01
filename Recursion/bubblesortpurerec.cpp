#include<iostream>
using namespace std;

//without using recursion


bubblesortrec(int arr[],int n, int i , int j ){

    //base case


    //rec case
    // agar j wala loop nahi challa 
    if(j==n-i-1){
        bubblesortrec(arr,n,i+1,0);
    }
    else{
        //agar j wala loop chalLa  
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        bubblesortrec(arr,n,i,j+1);
    }


}
int main(){

    int arr[]= {5,4,3,2,1};
    int n  = sizeof(arr)/sizeof(int);

    bubblesortrec(arr,n,0,0);

    for(int i = 0 ; i<=n-1 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;





    
    
    
    
    
    
    
    return 0;
}