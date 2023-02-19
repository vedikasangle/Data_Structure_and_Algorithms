#include<iostream>
using namespace std;


void spiralprint(int arr[3][4], int tr,int tc){

    int sr = 0 ; 
    int sc = 0 ;
    int ec = tc - 1 ;
    int er = tr - 1 ; 
    
    //loop
    while(sc<=ec and sr<=er){
    //first row 
    for(int i = sc ; i<=ec ;  i++){
         cout<<arr[sr][i]<<" ";    
    }
    sr++;//1

    //last column
    for(int j = sr ; j<=er ; j++){
        // cout<<arr[j][er]<<" ";
        cout<<arr[j][ec]<<" ";
    }
    ec--;

    //last row
    if(sr<=er){
        for(int k = ec ; k>=sc ; k--){
        cout<<arr[er][k]<<" ";
    }
    er--;
    }
    

    //first column 
    if(sc<=ec){
        for(int l = er ; l>=sr; l--){
        cout<<arr[l][sc]<<" ";
       }
    sc++;
    }

    }
    
}

int main(){
    
    //this code will run for square matrix and non-square matrix also
    int arr[3][4] = {
        {3, 4, 1, 5},
        {6, 7, 2, 8},
        {9, 0, 2, 3},
    };

    // 3 4 1 5 8 3 2 0 9 6 7 2

    spiralprint(arr,3,4);
    
     
    return 0;
}