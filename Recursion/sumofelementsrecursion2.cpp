//taking last three elements
#include<iostream>
using namespace std ; 

int sumofele(int arr[], int n ){
    //base case
    if(n==0){
        return 0 ;
    } 


    //recursive case 
    return sumofele(arr+1,n-1) + arr[0];

}


int main(){
    int arr[] = {3,4,1,2};
    int n = 4 ; 

    cout<<sumofele(arr,n)<<endl;

    return 0 ; 
}