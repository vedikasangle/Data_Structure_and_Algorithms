#include<iostream>
using namespace std ; 

int main(){
    int arr[]={2,3,1,5,6};
    int n = 5 ;
    
    // //========>
    // cout<<&arr[0]<<endl;
    // //array ka naam kya deta hai print karke 
    // cout<<arr<<endl;
    // //hence &arr[0] is same as arr
    
    // //hence &arr[1] is same as arr+1
    // cout<<&arr[1]<<endl;
    // cout<<arr+1<<endl;
    
    // //hence &arr[2] is same as arr+2
    // cout<<&arr[2]<<endl;
    // cout<<arr+2<<endl;

    // //so in general,*** &arr[i] is same as arr +i ***
    // //======>

    // //======>
    // //*arr is same as arr[0]
    // cout<<arr[0]<<endl;
    // cout<<*arr<<endl;
    
    // //*arr+1 is same as arr[1]
    // cout<<arr[1]<<endl;
    // cout<<*(arr+1)<<endl;
    // //so in general *(arr+i) is same as arr[i]
    // // so now, we can take input using pointers like:

    // for(int i =0 ; i <=4 ; i++){
    //     cin>>*(arr+i);
    // }

    //and give output using pointers 
    for(int i = 0; i<=4; i++ ){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;

    //=====>
    

    //proof of array is continuous memory allocation
    // cout<<&arr[0]<<endl;
    // cout<<&arr[1]<<endl;
    // cout<<&arr[2]<<endl;
    // cout<<&arr[3]<<endl;
    // cout<<&arr[4]<<endl;
}