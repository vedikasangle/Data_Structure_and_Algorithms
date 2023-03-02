#include<iostream>
using namespace std;

int binarysearchrec(int arr[], int s ,int e,int key){
    //base case -->kispe kaam nahi karna

    if(s>e){
        return -1;
    }

    //rec case 
    int mid=(s+e)/2;
    if(arr[mid]>key){
        return binarysearchrec(arr,s,mid-1,key);
    }
    else if(arr[mid]==key){
        return mid;
    }
    else{
        return binarysearchrec(arr,mid+1,e,key);
    }




}


int main(){
    int arr[] = {3,5,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index = binarysearchrec(arr,0,n-1,key);
    if(index<0){
        cout<<"Key is not present";
    }
    else{
    cout<<"Key is present at index "<<binarysearchrec(arr,0,n-1,key);
    }


    
    
    return 0;
}
