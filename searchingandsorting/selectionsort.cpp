#include<iostream>
using namespace std ; 


int main(){
    int arr[] = {4,3,1,5,2};
    int n = sizeof(arr)/sizeof(int);
    
    //we assume the first element on the first index to be the smallest and then compare
    
    for(int pos = 0 ; pos<= n -2; pos++){
    int minindex = pos ;//track index
    for(int j = pos + 1 ; j <=n-1 ; j ++){
    if(arr[j]<arr[minindex]){
        minindex = j; //not writing arr[j] because we are keeping hold of index and not element
        }
      }
      swap(arr[pos], arr[minindex]);
    }

    for(int i = 0 ; i <=n-1 ; i ++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
