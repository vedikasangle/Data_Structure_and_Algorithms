#include<iostream>
using namespace std ; 

int main(){
    int arr[100];
    int n ; 
    cin>>n ; 

    for(int i = 0 ; i <=n-1 ; i++ ){
        cin>>arr[i];
    }
    
    //3 9 6 -2 3 
    int largest = arr[0]; //3 
    for(int j = 1 ; j<=n-1 ; j++){
    if(arr[j]>largest){
        largest = arr[j];//9
    }
    }
    cout<<"The largest element in array is "<<largest<<endl;

    return 0 ; 
}