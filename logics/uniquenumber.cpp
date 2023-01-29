#include<iostream>
using namespace std ; 

//every number exist 2 times except one, find that number 
//5 3 6 5 6 
int main(){
    int tn ; 
    cin>>tn; //5 (total numbers)  

    int no ;
    cin>>no;//5 (first number)

    int ans = no;//5 
    
    //loop
    int i = 1 ; 
    while(i<=tn-1){
    cin>>no;//3(second number) 6 5 6
    ans = (ans^no); //5^3 -->6 =>6^6 -->0 => 0^5 -->5  => 5^6 -->3
    i = i + 1 ;
    }

    cout<<ans<<endl;

    return 0 ; 


}