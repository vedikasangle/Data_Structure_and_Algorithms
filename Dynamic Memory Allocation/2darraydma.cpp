#include<iostream>
using namespace std;


int main(){
    //dma 
    int **arr = new int*[3];

    // arr[0] = new int[4];
    // arr[1] = new int[4];
    // arr[2] = new int[4];

    for(int i = 0 ; i<3 ; i++){
        arr[i] = new int [4];
    }
       for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
            cout<<arr[i][j]<<" ";
        }
    }
    
    for(int i = 0 ; i<3 ; i++){
        delete []arr[i];
        arr[i] = NULL;
    }

    delete []arr;
    arr = NULL;




    
    
    
    return 0;
}