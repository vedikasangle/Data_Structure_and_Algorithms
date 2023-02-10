#include<iostream>
using namespace std ;

int binarysearch(int arr[],int ele, int s, int e){//element = 4 
    
   
    
  

}

int main(){
    int arr[] = {2,3,5,7,8,9,11};
    int n = 7 ; 
    int ele;
    cin>>ele;


    int s = 0 ; 
    int e = n-1;

    //loop
    while(s<=e){
    //mid
    int mid = (s+e)/2;//catch index 
    if(arr[mid]==ele){ //catch element using arr[mid] ; 4==7 3==4 5==4
        cout<<"Element is present at index : "<<mid;
        break;
    } 
    else if(arr[mid]>ele){//4<7 4<3 4<5
        e = mid-1; 
    }
    else{
        s = mid+1;
    }
    }

    if(s<e){
        cout<<"Element is not present";
    }



    return 0 ; 
}