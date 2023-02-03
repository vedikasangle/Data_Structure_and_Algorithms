#include<iostream>
using namespace std ; 

int main(){
    // // int m1 = 30, m2=40, m3 = 50, m4=20, m5 = 80 ;
    // // cout<<m1<<" "<<m2<<" "<<m3<<" "<<m4<<" "<<m5<<endl;

    // //arrays

    // //syntax for arrays
    // // datatype nameofarray[size];
    // int arr[5];

    // //to access a bucket 
    // //1st method
    // //arrayname[indexvalue];
    // arr[0] = 30 ; 
    // arr[1] = 40;
    // arr[2] = 50;
    // arr[3] = 60; 
    // arr[4] = 80;

    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;
    

    // //2nd method
    // int arrr[5] = {30,4,50,2,8}; 
    // cout<<arrr[0]<<" "<<arrr[1]<<" "<<arrr[2]<<" "<<arrr[3]<<" "<<arrr[4]<<endl;
     
    // int arrr1[] = {34,54};//other values will get zero or garbage value
    // cout<<arrr1[0]<<" "<<arrr1[1]<<" "<<arrr1[2]<<" "<<arrr1[3]<<" "<<arrr1[4]<<endl; 

    // //3rd method ==>you can ignore size of array but we need to put value in array in the same time only 
    // int aarr[] = {20,10,65,11,22};
    // cout<<aarr[0]<<" "<<aarr[1]<<" "<<aarr[2]<<" "<<aarr[3]<<" "<<aarr[4]<<endl;
     
    // //to declare arrays with zero
    // // int arr[5] = {}; or 
    // // int arr[5] = {0};

     
    // //size ==> total bytes 
    // //length ==>total buckets 
    
    // //to find size of operator

    // int ar2[] = {5,3,6,7,7,67};
    // int totalbuckets = sizeof(arr)/sizeof(int) ;//16

    // cout<<totalbuckets<<endl;

    //to take input from user 
    // int arr3[5];
    // cin>>arr3[0];
    // cin>>arr3[1];
    // cin>>arr3[2];
    // cin>>arr3[3];
    // cin>>arr3[4];

    // cout<<arr3[0]<<" "<<arr3[1]<<" "<<arr3[2]<<" "<<arr3[3]<<" "<<arr3[4]<<endl;
    
    //to take input from loop
    int arr3[5];
    for(int i  = 0 ; i<=4 ; i++){
        cin>>arr3[i];   //doubt -> after taking input how is the output coming on next line??
    }
    for(int i = 0 ; i <=4 ; i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    cout<<"hii";


    return 0 ; 
} 
