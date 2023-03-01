#include<iostream>
using namespace std;

void bubblesortrec(int arr[], int n, int i ){
    //base case 
    if(i==n-1){
        return ;
    }




    //rec case 
    //to bring one element at right place 
    for(int j = 0 ; j<=n-2-i ; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    bubblesortrec(arr,n,i+1);
}


int main(){
    int arr[]= {5,4,3,2,1};
    int n  = sizeof(arr)/sizeof(int);

    bubblesortrec(arr,n,0);

    for(int i = 0 ; i<=n-1 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    
    
    
    return 0;
}