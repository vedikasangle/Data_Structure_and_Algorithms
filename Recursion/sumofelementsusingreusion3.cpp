//using iterator 
#include<iostream>
using namespace std ; 

int sumofele(int arr[], int n, int i  ){
    //base case
    if(i == n ){ //or i>n-1
        return 0 ;
    } 


    //recursive case 
    return sumofele(arr,n,i+1) + arr[i];

}


int main(){
    int arr[] = {3,4,1,2,5};
    int n = 4 ; 

    cout<<sumofele(arr,n,0)<<endl;

    return 0 ; 
}