#include<iostream>
using namespace std;

void mergetwosortedarrays(int arr[],int s , int e ){

    int temp[1000]; 
    int i = s ;
    int mid = (s+e)/2; 
    int j = mid+1 ;
    int k = s ; //why not k = 0 ??
     
    //loop
    while(i<=mid and j<=e){
    if(arr[i]<arr[j]){
        temp[k] = arr[i];
        i++;
        k++;
    }
    else{
        temp[k] = arr[j];
        j++;
        k++; 
    }
    }

    //j<=m-1 2nd wali array khatam hui , so now pehli wali array ko direct daaldo temp me
    //either of the one loop will run if n and m are not equal 
    //? dursri wali array khatam hui 
    while(i<=mid){
        temp[k] = arr[i];
        i++;
        k++;
    }

    //?pehli wali array khatam hui
    while(j<=e){
        temp[k] = arr[j];
        j++;
        k++; 
    }
    
    //copy temp ko arr wali array me 
    for(int l = s ; l<=e;l++){
        arr[l] = temp[l];
    }
    // //printing arr wali array 
    // for(int l = s ; l<e;l++){
    //     cout<<arr[l]<<" ";
    // }
    // cout<<endl; 
}

void mergesort(int arr[5], int s , int e){
    //base case 
    if(s==e){
        return; 
    }


    //rec case 
    //! step 1 --> find the mid 
    int mid = (s+e)/2;
    mergesort(arr,s,mid);//4 2 1 --> 1 2 4 
    mergesort(arr,mid+1,e);//5 3 --> 3 5 
    mergetwosortedarrays(arr,s,e); //1 2 4 3 5 --> 1 2 3 4 5 
}


int main(){
    int arr[5] = {4,2,1,5,3};
    int n = 5 ;

    mergesort(arr,0,n-1);

    //printing arr wali array 
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
    
    return 0;
}