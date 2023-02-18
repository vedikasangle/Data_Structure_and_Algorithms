#include<iostream>
using namespace std ; 

void solve(){
    int n ; 
    cin>>n;

    int arr[n];
    
    for(int i = 0 ; i<n ; i++){
        int low  = 0 ; 
        int high = n-1;
        int target ;
        cin>>target;

        while(low<high){
            int pair = arr[low] + arr[high];
            if(pair == target){
                cout<<true<<endl;
                break;
            }
            if(pair<target){
                high--;
            }
            else{
                low++;
            }

        }

    }
}
}



int main(){

    solve();
 

    // // int sum = 0 ; 
    // int i = 0 ; 
    // int j = n ; 
    // int sum = i  + j  ; 
    // int target = 9 ; 
     
    // while(i<=n){
    // if(sum>target){
    //     j--;
    // }
    // else if(sum<target){
    //     i++;
    // }
    // else{
    //     cout<<i<<j;
    // }
    // }
}
