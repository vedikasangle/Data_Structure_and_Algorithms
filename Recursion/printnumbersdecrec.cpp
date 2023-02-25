#include<iostream>
using namespace std;



void decprint(int n){
    //base case (on 0 )
    if(n==0){
        return  ; 
    }

    //rec case
    cout<<n<<" ";//4
    decprint(n-1);//3 2 1 
    
}
int main(){
    int n ; 
    cin>>n;

    decprint(n);



    
    
    return 0;
}