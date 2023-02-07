#include<iostream>
using namespace std ; 

//b can also be named as arr
void update(int b[], int n){
    for(int i = 0 ; i <=n-1 ; i++){
        b[i] = b[i] + 10 ; 
    }
    //b --> 13 12 14 11
    for(int i = 0 ; i<=n-1; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;


}
int main(){
    int arr[] = {3,2,4,1};
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0 ; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    update(arr,n);
    
    for(int i = 0 ; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;




}