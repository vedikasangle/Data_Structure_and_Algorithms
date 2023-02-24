//using recursion - > giving whole array to recursion 

//using recursion -> last three elements given to recursion 
#include<iostream>
using namespace std ; 

bool isarraysorted(int arr[], int n, int i ){
    //base case
    if(i==n-1){
        return true;
    }
    if(arr[i]<=arr[i+1] and isarraysorted(arr,n,i+1)){
        return true;
    }
    return false; 

}

int main(){
    int arr[] = {3,4,6,9};
    int n = 4 ; 

    if(isarraysorted(arr,n,0) == true){ //last parameter : int i = 0 ;
        cout<<"yes sorted";
    }
    else{
        cout<<"not sorted";
    }

    return 0 ; 
}