#include<iostream>
using namespace std;

string moveallxatend(string s ){//"axbpxxcxd"
    //base case
    if(s.length()==0){
        return s;
    }



    //recursive case 
    char ch = s[0];//'a'

    string cans = moveallxatend(s.substr(1));//bpcdxxx
    if(ch=='x'){
        //toh cans ke peeche
        //hence append or pushback 
        return cans + ch ; 
    }
    else{
        return ch + cans; 
    }
    
}



int main(){
    string s ; 
    cin>>s ; 
    cout<<moveallxatend(s)<<endl;






    return 0;
}