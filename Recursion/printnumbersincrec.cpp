#include<iostream>
using namespace std;



void incprint(int n){
    //base case (on 0 )
    if(n==0){
        return  ; 
    }

    //rec case
    incprint(n-1);
    cout<<n<<" ";
    
}
int main(){
    int n ; 
    cin>>n;

    incprint(n);



    
    
    return 0;
}