#include<iostream>
using namespace std;


void spiralprint(int arr[4][4], int tr,int tc){

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
    for(int k = ec ; k>=sc ; k--){
        cout<<arr[er][k]<<" ";
    }
    er--;

    //first column 
    for(int l = er ; l>=sr; l--){
        cout<<arr[l][sc]<<" ";
    }
    sc++;
    }
}

int main(){
    
    //this code will run for square matrix only
    int arr[4][4] = {
        {3, 4, 1, 5},
        {6, 7, 2, 8},
        {9, 0, 2, 3},
        {1, 10, 21, 23}
    };

    spiralprint(arr,4,4);
    // cout<<endl;
     
    return 0;
}