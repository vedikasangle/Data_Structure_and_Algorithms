#include<iostream>
using namespace std;

//! is 7 present 
bool is7present(int arr[], int n,int i  ){
    //base case
    if(i==n){
        return false;

    }
    //recursive case (using iterator approach)
    if(arr[i] == 7){
        return true;
    }
    return is7present(arr,n,i+1);
}
//! 2] first index of 7
int firstindexof7(int arr[],int n, int i ){
    //base case
    if(i==n){
        return -18; //any invalid(negative index)
    }

    //recursive case
    if(arr[i]==7){
        return i;     
     } 
    return firstindexof7(arr,n,i+1);
}

//!find last index of 7 

int lastindex7(int arr[],int n ,int i ){
    //base case
    if(i<0){
        return -5;//invalid index
    }

    //recursive case 
    if(arr[i]==7){
        return i ; 
    }
    return lastindex7(arr,n,i-1);
}

//!print all indices of 7 (increasing)

void allindicesof7(int arr[],int n,int i){
    //base case
    if(i==n){
        return ; 
    }


    //recursive case 
    if(arr[i]==7){
        cout<<i<<" ";
    }
    allindicesof7(arr,n,i+1);
}


int main(){
    int arr[] = {7,4,7,6,5,7,2,7,5};
    int n = sizeof(arr)/sizeof(int);

    //?First
    if(is7present(arr,n,0)==true){
        cout<<"yes present"<<endl;
    }
    else{
        cout<<"not present";
    }
    
    //?Second
    int firstindex = firstindexof7(arr,n,0);
    if(firstindex<0){
        cout<<"Element is not present"<<endl;
    }
    else{
        cout<<"First 7 is present at index "<<firstindex<<endl;
    }

    //?Third
    int lastindex = lastindex7(arr,n,n-1);
    if(lastindex<0){
        cout<<"Element is not present"<<endl;
    }
    else{
        cout<<"First 7 is present at index "<<lastindex<<endl;
    }

    //?Forth 
    allindicesof7(arr,n,0);



    return 0;
}

 

