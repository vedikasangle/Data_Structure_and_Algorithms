#include<iostream>
using namespace std;

int main(){
    int arr[5];
    // for(int i = 0 ; i<5; i++){
    //     cin>>arr[i];
    // }
    // for(int i = 0 ; i<5 ; i++){
    //     cout<<arr[i]<<" ";
    // }


    //dma
    int *ptr =new int[5];
     for(int i = 0 ; i<5; i++){
        cin>>ptr[i];
    }
    for(int i = 0 ; i<5 ; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;

    //!syntax to delete an array
    delete[] ptr ;
    ptr = NULL;  



    
    
    return 0;
}