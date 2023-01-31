#include<iostream>
using namespace std ;

int main(){
    char ch ;//char can hold single charaqcter at a time, it cannot hold more than one char at a time 

    int count = 0;  

    //loop
    //first approach
    //cin >>ch ; // 'h'
    ch = cin.get();//to consider whitespaces 
    while(ch!='$'){
    count = count + 1;//1 2 3 4 5 
    // cin>>ch; //'e'l l o $
    ch = cin.get();
    }
    cout<<count<<endl;

    //second approach 
    cin>>ch ;
    while(-4){
        if(ch!='$'){
            break;
        }
        count = count + 1 ; 
        cin>>ch ; 
    }
    cout<<count<<endl;

    //in this spaces are not considered, because cin has property to ignore whitespaces 



    return 0 ; 

    


}