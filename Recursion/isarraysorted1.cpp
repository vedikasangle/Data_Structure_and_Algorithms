//using recursion -> first three elements given to recursion 
#include<iostream>
using namespace std ; 

bool isarraysorted(int arr[], int n ){
    //base case -->will be applied on n, as n is changing in recursive case 
    if(n==1){
        return true ;
    }
    
    //recursive case ->first three elememts 
    if(isarraysorted(arr,n-1) and arr[n-2]<=arr[n-1]){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int arr[] = {3,6,6,9};
    int n = 4 ; 

    if(isarraysorted(arr,n) == true){
        cout<<"yes sorted";
    }
    else{
        cout<<"not sorted";
    }

    return 0 ; 
}