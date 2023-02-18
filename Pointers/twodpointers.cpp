#include<iostream>
using namespace std ; 

int main(){
    int arr[3][4] = {
        {3,4,1,5},
        {6,7,2,8},
        {9,0,2,3}
    };

    // for(int i = 0 ; i<=2;i++){
    //     for(int j = 0 ; j<=3 ; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //proof that 2d array is stored linearly 
    cout<<&arr[0][0]<<endl;
    cout<<&arr[0][1]<<endl;
    cout<<&arr[0][2]<<endl;
    cout<<&arr[0][3]<<endl;
    cout<<&arr[1][0]<<endl;
    cout<<&arr[1][1]<<endl;
    cout<<&arr[1][2]<<endl;
    cout<<&arr[1][3]<<endl;

    //the address are -
    // 0x61fee0
    // 0x61fee4
    // 0x61fee8
    // 0x61feec
    // 0x61fef0
    // 0x61fef4
    // 0x61fef8
    // 0x61fefc

    
    //arr is same as &arr[0][0] is same as arr[0] in case of 2d arrays
    // cout<<arr<<endl;
    // cout<<&arr[0][0]<<endl; 
    // cout<<arr[0]<<endl;  
    
    //in this same way below are same
    // cout<<&arr[1][0]<<endl;
    // cout<<arr[1]<<endl;

    //and these are also same
    // cout<<&arr[2][0]<<endl;
    // cout<<arr[2]<<endl;
    return 0 ; 
}